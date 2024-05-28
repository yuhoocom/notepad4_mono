// This file is part of Notepad4.
// See License.txt for details about distribution and modification.
#pragma once

#ifndef NP2_noexcept
	#if defined(__cplusplus)
		#define NP2_noexcept noexcept
	#else
		#define NP2_noexcept
	#endif
#endif

#if defined(__clang__)
#define NP2_align_up(value, alignment)		__builtin_align_up(value, alignment)
#define NP2_align_ptr(ptr, alignment)		__builtin_align_up(ptr, alignment)
#define NP2_is_aligned(value, alignment)	__builtin_is_aligned(value, alignment)
#define NP2_is_aligned_ptr(ptr, alignment)	__builtin_is_aligned(ptr, alignment)
#else
#define NP2_align_up(value, alignment)		(((value) + (alignment) - 1) & ~((alignment) - 1))
#define NP2_align_ptr(ptr, alignment)		((void *)NP2_align_up((uintptr_t)(ptr), alignment))
#define NP2_is_aligned(value, alignment)	(((value) & ((alignment) - 1)) == 0)
#define NP2_is_aligned_ptr(ptr, alignment)	NP2_is_aligned((uintptr_t)(ptr), alignment)
#endif

// https://docs.microsoft.com/en-us/cpp/intrinsics/compiler-intrinsics
// https://software.intel.com/sites/landingpage/IntrinsicsGuide/
// https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html
// https://clang.llvm.org/docs/LanguageExtensions.html
#include <intrin.h>

#if defined(__aarch64__) || defined(_ARM64_) || defined(_M_ARM64)
	#define NP2_TARGET_ARM		1
	#define NP2_TARGET_ARM64	1
	#define NP2_TARGET_ARM32	0
	#define NP2_USE_SSE2		0
	#define NP2_USE_AVX2		0
	// TODO: use ARM Neon
#elif defined(__arm__) || defined(_ARM_) || defined(_M_ARM)
	#define NP2_TARGET_ARM		1
	#define NP2_TARGET_ARM64	0
	#define NP2_TARGET_ARM32	1
	#define NP2_USE_SSE2		0
	#define NP2_USE_AVX2		0
#else
	#define NP2_TARGET_ARM		0
	#define NP2_TARGET_ARM64	0
	#define NP2_TARGET_ARM32	0
	// SSE2 enabled by default
	#define NP2_USE_SSE2		1

	// Clang and GCC use -march=x86-64-v3, https://clang.llvm.org/docs/UsersManual.html#x86
	// or -mavx2 -mpopcnt -mbmi -mbmi2 -mlzcnt -mmovbe
	// MSVC use /arch:AVX2
	#if defined(_WIN64) && defined(__AVX2__)
		#define NP2_USE_AVX2	1
	#else
		#define NP2_USE_AVX2	0
	#endif

	// TODO: use __isa_enabled/__isa_available in MSVC build to dynamic enable AVX2 code.
	//#if defined(_MSC_VER) || (defined(__has_include) && __has_include(<isa_availability.h>))
	//	#include <isa_availability.h>
	//#else
	//#endif

	// TODO: Function Multiversioning https://gcc.gnu.org/wiki/FunctionMultiVersioning
#endif

// for C++20, use functions from <bit> header.
// count trailing zero bits
//!NOTE: TZCNT is compatible with BSF for non-zero value;
//! but LZCNT is not compatible with BSR, LZCNT = 31 - BSR.
#if defined(__clang__) || defined(__GNUC__)
	#define np2_ctz(x)		__builtin_ctz(x)
	#define np2_ctz64(x)	__builtin_ctzll(x)
#elif !NP2_TARGET_ARM && (defined(_MSC_VER) || defined(__INTEL_COMPILER_BUILD_DATE))
	#define np2_ctz(x)		_tzcnt_u32(x)
	#define np2_ctz64(x)	_tzcnt_u64(x)
#else
	static inline uint32_t np2_ctz(uint32_t value) NP2_noexcept {
		unsigned long trailing;
		_BitScanForward(&trailing, value);
		return trailing;
	}

#if defined(_WIN64)
	static inline uint32_t np2_ctz64(uint64_t value) NP2_noexcept {
		unsigned long trailing;
		_BitScanForward64(&trailing, value);
		return trailing;
	}
#endif
#endif

// find index of the highest set bit
#if NP2_TARGET_ARM
#if defined(__clang__) || defined(__GNUC__)
	#define np2_bsr(x)		(__builtin_clz(x) ^ 31)
	#define np2_bsr64(x)	(__builtin_clzll(x) ^ 63)
#else
	#define np2_bsr(x)		(_CountLeadingZeros(x) ^ 31)
	#define np2_bsr64(x)	(_CountLeadingZeros64(x) ^ 63)
#endif

#else
	static inline uint32_t np2_bsr(uint32_t value) NP2_noexcept {
		unsigned long trailing;
		_BitScanReverse(&trailing, value);
		return trailing;
	}

#if defined(_WIN64)
	static inline uint32_t np2_bsr64(uint64_t value) NP2_noexcept {
		unsigned long trailing;
		_BitScanReverse64(&trailing, value);
		return trailing;
	}
#endif
#endif

// count leading zero bits
#if defined(__clang__) || defined(__GNUC__)
	#define np2_clz(x)		__builtin_clz(x)
	#define np2_clz64(x)	__builtin_clzll(x)
#elif NP2_TARGET_ARM
	#define np2_clz(x)		_CountLeadingZeros(x)
	#define np2_clz64(x)	_CountLeadingZeros64(x)
#elif NP2_USE_AVX2
	#define np2_clz(x)		_lzcnt_u32(x)
	#define np2_clz64(x)	_lzcnt_u64(x)
#else
	#define np2_clz(x)		(np2_bsr(x) ^ 31)
	#define np2_clz64(x)	(np2_bsr64(x) ^ 63)
#endif

// count bits set
#if defined(__clang__) || defined(__GNUC__)
	#define np2_popcount(x)		__builtin_popcount(x)
	#define np2_popcount64(x)	__builtin_popcountll(x)
#elif NP2_USE_AVX2
	#define np2_popcount(x)		_mm_popcnt_u32(x)
	#define np2_popcount64(x)	_mm_popcnt_u64(x)
#else
	// https://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetParallel
	// Bit Twiddling Hacks copyright 1997-2005 Sean Eron Anderson
	// see also https://github.com/WojciechMula/sse-popcount
	static __forceinline uint32_t bth_popcount(uint32_t v) NP2_noexcept {
		v = v - ((v >> 1) & 0x55555555U);
		v = (v & 0x33333333U) + ((v >> 2) & 0x33333333U);
		return (((v + (v >> 4)) & 0x0F0F0F0FU) * 0x01010101U) >> 24;
	}

	//#define np2_popcount(x)		__popcnt(x)
	#define np2_popcount(x)		bth_popcount(x)

#if defined(_WIN64)
	static __forceinline uint64_t bth_popcount64(uint64_t v) NP2_noexcept {
		v = v - ((v >> 1) & UINT64_C(0x5555555555555555));
		v = (v & UINT64_C(0x3333333333333333)) + ((v >> 2) & UINT64_C(0x3333333333333333));
		return (((v + (v >> 4)) & UINT64_C(0x0F0F0F0F0F0F0F0F)) * UINT64_C(0x0101010101010101)) >> 56;
	}

	//#define np2_popcount64(x)	__popcnt64(x)
	#define np2_popcount64(x)	bth_popcount64(x)
#endif
#endif

// https://graphics.stanford.edu/~seander/bithacks.html#IntegerLog10
#define np2_ilog10_lower(x)		(((uint32_t)np2_bsr(x) + 1)*77 >> 8)
#define np2_ilog10_upper(x)		(np2_ilog10_lower(x) + 1)
#define np2_ilog10_lower64(x)	(((uint32_t)np2_bsr64(x) + 1)*77 >> 8)
#define np2_ilog10_upper64(x)	(np2_ilog10_lower64(x) + 1)

// https://stackoverflow.com/questions/32945410/sse2-intrinsics-comparing-unsigned-integers
#if NP2_USE_AVX2
#define mm256_cmpge_epu8(a, b) \
	_mm256_cmpeq_epi8(_mm256_max_epu8((a), (b)), (a))
#define mm256_cmple_epu8(a, b)	mm256_cmpge_epu8((b), (a))

#define ZeroMemory_32x1(buffer) do { \
	const __m256i zero = _mm256_setzero_si256();						\
	_mm256_store_si256((__m256i *)(buffer), zero);						\
} while (0)

#define ZeroMemory_32x2(buffer) do { \
	const __m256i zero = _mm256_setzero_si256();						\
	_mm256_store_si256((__m256i *)(buffer), zero);						\
	_mm256_store_si256((__m256i *)((buffer) + sizeof(__m256i)), zero);	\
} while (0)
#endif

#if NP2_USE_SSE2
#define mm_cmpge_epu8(a, b) \
	_mm_cmpeq_epi8(_mm_max_epu8((a), (b)), (a))
#define mm_cmple_epu8(a, b)		mm_cmpge_epu8((b), (a))

#define ZeroMemory_16x2(buffer) do { \
	const __m128 zero = _mm_setzero_ps();						\
	_mm_store_ps((float *)(buffer), zero);						\
	_mm_store_ps((float *)((buffer) + sizeof(__m128)), zero);	\
} while (0)

#define ZeroMemory_16x4(buffer) do { \
	const __m128 zero = _mm_setzero_ps();						\
	_mm_store_ps((float *)(buffer), zero);						\
	_mm_store_ps((float *)((buffer) + sizeof(__m128)), zero);	\
	_mm_store_ps((float *)((buffer) + 2*sizeof(__m128)), zero);	\
	_mm_store_ps((float *)((buffer) + 3*sizeof(__m128)), zero);	\
} while (0)
#endif


#if defined(__GNUC__) || defined(__clang__)
#define bswap32(x)				__builtin_bswap32(x)
#else
#define bswap32(x)				_byteswap_ulong(x)
#endif

#if defined(__clang__)
#define rotr8(x)				__builtin_rotateright32((x), 8)
#define rotl8(x)				__builtin_rotateleft32((x), 8)
#elif defined(_MSC_VER)
#define rotr8(x)				_rotr((x), 8)
#define rotl8(x)				_rotl((x), 8)
#else
static inline uint32_t rotr8(uint32_t x) NP2_noexcept {
	return ((x & 0xff) << 24) | (x >> 8);
}
static inline uint32_t rotl8(uint32_t x) NP2_noexcept {
	return (x >> 24) | (x << 8);
}
#endif

static inline uint32_t loadle_u32(const void *ptr) NP2_noexcept {
	return *((const uint32_t *)ptr);
}

#if NP2_USE_AVX2
static inline uint32_t loadbe_u32(const void *ptr) NP2_noexcept {
#if defined(__GNUC__)
	return __builtin_bswap32(loadle_u32(ptr));
#else
	return _loadbe_i32(ptr);
#endif
}

#if defined(__GNUC__)
#define andn_u32(a, b)	__andn_u32((a), (b))
#else
#define andn_u32(a, b)	_andn_u32((a), (b))
#endif

#define bit_zero_high_u32(x, index)	_bzhi_u32((x), (index))			// BMI2
//#define bit_zero_high_u32(x, index)	_bextr_u32((x), 0, (index))		// BMI1
#else

static inline uint32_t loadbe_u32(const void *ptr) NP2_noexcept {
	return bswap32(loadle_u32(ptr));
}

static inline uint32_t andn_u32(uint32_t a, uint32_t b) NP2_noexcept {
	return (~a) & b;
}

static inline uint32_t bit_zero_high_u32(uint32_t x, uint32_t index) NP2_noexcept {
	return x & ((1U << index) - 1);
}
#endif

#if NP2_TARGET_ARM
static inline bool bittest(const uint32_t *addr, uint32_t index) NP2_noexcept {
	return (*addr >> index) & true;
}
static inline bool bittestandset(uint32_t *addr, uint32_t index) NP2_noexcept {
	const bool bit = (*addr >> index) & true;
	*addr |= 1U << index;
	return bit;
}
static inline bool bittestandreset(uint32_t *addr, uint32_t index) NP2_noexcept {
	const bool bit = (*addr >> index) & true;
	*addr &= ~(1U << index);
	return bit;
}
#else
static inline bool bittest(const uint32_t *addr, uint32_t index) NP2_noexcept {
	return _bittest((const long *)addr, index);
}
static inline bool bittestandset(uint32_t *addr, uint32_t index) NP2_noexcept {
	return _bittestandset((long *)addr, index);
}
static inline bool bittestandreset(uint32_t *addr, uint32_t index) NP2_noexcept {
	return _bittestandreset((long *)addr, index);
}
#endif

static inline bool BitTestEx(const uint32_t *start, uint32_t value) NP2_noexcept {
	return bittest(start + (value >> 5), value & 31);
}

namespace np2 {
inline auto ctz(uint32_t x) noexcept { return np2_ctz(x); }
inline auto clz(uint32_t x) noexcept { return np2_clz(x); }
inline auto bsr(uint32_t x) noexcept { return np2_bsr(x); }
inline auto popcount(uint32_t x) noexcept { return np2_popcount(x); }
#if defined(_WIN64)
inline auto ctz(uint64_t x) noexcept { return np2_ctz64(x); }
inline auto clz(uint64_t x) noexcept { return np2_clz64(x); }
inline auto bsr(uint64_t x) noexcept { return np2_bsr64(x); }
inline auto popcount(uint64_t x) noexcept { return np2_popcount64(x); }
#endif
}
