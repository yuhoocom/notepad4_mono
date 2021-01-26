/* Scintilla source code edit control */
/** @file SciLexer.h
 ** Interface to the added lexer functions in the SciLexer version of the edit control.
 **/
/* Copyright 1998-2002 by Neil Hodgson <neilh@scintilla.org>
 * The License.txt file describes the conditions under which this software may be distributed. */

/* Most of this file is automatically generated from the SciLexer.iface interface definition
 * file which contains any comments about the definitions. HFacerLexer.py does the generation. */
#pragma once

/* SciLexer features - not in standard Scintilla */

/* ++Autogenerated -- start of section automatically generated from SciLexer.iface */
#define SCLEX_CONTAINER 0
#define SCLEX_NULL 1
#define SCLEX_PYTHON 2
#define SCLEX_CPP 3
#define SCLEX_HTML 4
#define SCLEX_XML 5
#define SCLEX_PERL 6
#define SCLEX_SQL 7
#define SCLEX_VB 8
#define SCLEX_PROPERTIES 9
#define SCLEX_MAKEFILE 11
#define SCLEX_BATCH 12
#define SCLEX_LATEX 14
#define SCLEX_LUA 15
#define SCLEX_DIFF 16
#define SCLEX_CONF 17
#define SCLEX_PASCAL 18
#define SCLEX_LISP 21
#define SCLEX_RUBY 22
#define SCLEX_TCL 25
#define SCLEX_VBSCRIPT 28
#define SCLEX_MATLAB 32
#define SCLEX_ASM 34
#define SCLEX_FORTRAN 36
#define SCLEX_CSS 38
#define SCLEX_NSIS 43
#define SCLEX_YAML 48
#define SCLEX_VERILOG 56
#define SCLEX_AU3 60
#define SCLEX_BASH 62
#define SCLEX_VHDL 64
#define SCLEX_REBOL 71
#define SCLEX_INNOSETUP 76
#define SCLEX_CMAKE 80
#define SCLEX_R 86
#define SCLEX_POWERSHELL 88
#define SCLEX_MARKDOWN 98
#define SCLEX_COFFEESCRIPT 102
#define SCLEX_AVS 104
#define SCLEX_RUST 111
#define SCLEX_REGISTRY 115
#define SCLEX_SREC 117
#define SCLEX_IHEX 118
#define SCLEX_TEHEX 119
#define SCLEX_JSON 120
#define SCLEX_CIL 127
#define SCLEX_AHK 200
#define SCLEX_TEXINFO 202
#define SCLEX_FSHARP 203
#define SCLEX_SRT 204
#define SCLEX_SMALI 205
#define SCLEX_GRAPHVIZ 206
#define SCLEX_VIM 207
#define SCLEX_JAVA 208
#define SCLEX_LLVM 209
#define SCLEX_KOTLIN 210
#define SCLEX_JAVASCRIPT 211
#define SCLEX_JULIA 212
#define SCLEX_WASM 213
#define SCLEX_TOML 214
#define SCLEX_GN 215
#define SCLEX_GO 216
#define SCLEX_DART 217
#define SCLEX_SWIFT 218
#define SCLEX_AUTOMATIC 1000
#define SCE_PY_DEFAULT 0
#define SCE_PY_COMMENTLINE 1
#define SCE_PY_NUMBER 2
#define SCE_PY_WORD 3
#define SCE_PY_WORD2 4
#define SCE_PY_STRING1 5
#define SCE_PY_STRING2 6
#define SCE_PY_TRIPLE_STRING1 7
#define SCE_PY_TRIPLE_STRING2 8
#define SCE_PY_BYTES1 9
#define SCE_PY_BYTES2 10
#define SCE_PY_TRIPLE_BYTES1 11
#define SCE_PY_TRIPLE_BYTES2 12
#define SCE_PY_RAW_STRING1 13
#define SCE_PY_RAW_STRING2 14
#define SCE_PY_RAW_BYTES1 15
#define SCE_PY_RAW_BYTES2 16
#define SCE_PY_CLASSNAME 17
#define SCE_PY_DEFNAME 18
#define SCE_PY_OPERATOR 19
#define SCE_PY_IDENTIFIER 20
#define SCE_PY_COMMENTBLOCK 21
#define SCE_PY_DECORATOR 22
#define SCE_PY_BUILTIN_FUNC 23
#define SCE_PY_BUILTIN_CONST 24
#define SCE_PY_OBJ_FUNC 25
#define SCE_PY_CLASS 26
#define SCE_PY_ATTR 27
#define SCE_PY_FUNCTION 28
#define SCE_PY_FMT_STRING1 29
#define SCE_PY_FMT_STRING2 30
#define SCE_PY_TRIPLE_FMT_STRING1 40
#define SCE_PY_TRIPLE_FMT_STRING2 41
#define SCE_C_DEFAULT 0
#define SCE_C_COMMENT 1
#define SCE_C_COMMENTLINE 2
#define SCE_C_COMMENTDOC 3
#define SCE_C_COMMENTLINEDOC 4
#define SCE_C_COMMENTDOC_TAG 5
#define SCE_C_COMMENTDOC_TAG_XML 6
#define SCE_C_IDENTIFIER 7
#define SCE_C_WORD 8
#define SCE_C_WORD2 9
#define SCE_C_PREPROCESSOR 10
#define SCE_C_DIRECTIVE 11
#define SCE_C_OPERATOR 12
#define SCE_C_CHARACTER 13
#define SCE_C_STRING 14
#define SCE_C_STRINGEOL 15
#define SCE_C_NUMBER 16
#define SCE_C_LABEL 17
#define SCE_C_ASM_INSTRUCTION 18
#define SCE_C_ASM_REGISTER 19
#define SCE_C_REGEX 20
#define SCE_C_VERBATIM 21
#define SCE_C_STRINGRAW 22
#define SCE_C_ESCAPECHAR 23
#define SCE_C_CLASS 30
#define SCE_C_STRUCT 31
#define SCE_C_UNION 40
#define SCE_C_TRAIT 41
#define SCE_C_INTERFACE 42
#define SCE_C_ATTRIBUTE 43
#define SCE_C_ENUMERATION 44
#define SCE_C_CONSTANT 45
#define SCE_C_FUNCTION 46
#define SCE_C_MACRO 47
#define SCE_C_MACRO2 48
#define SCE_C_2NDWORD 50
#define SCE_C_2NDWORD2 51
#define SCE_C_VARIABLE 52
#define SCE_C_VARIABLE2 53
#define SCE_C_HEREDOC 54
#define SCE_C_NOWDOC 55
#define SCE_C_UUID 56
#define SCE_C_XML_DEFAULT 60
#define SCE_C_XML_TAG 61
#define SCE_C_XML_ATTR 62
#define SCE_C_XML_VALUE 63
#define SCE_C_XML_ASSIGN 64
#define SCE_C_TRIPLEVERBATIM 65
#define SCE_C_DNESTEDCOMMENT 70
#define SCE_C_DSTRINGB 71
#define SCE_C_DSTRINGX 72
#define SCE_C_DSTRINGQ 73
#define SCE_C_DSTRINGT 74
#define SCE_TCL_DEFAULT 0
#define SCE_TCL_COMMENT 1
#define SCE_TCL_COMMENTLINE 2
#define SCE_TCL_NUMBER 3
#define SCE_TCL_WORD_IN_QUOTE 4
#define SCE_TCL_IN_QUOTE 5
#define SCE_TCL_OPERATOR 6
#define SCE_TCL_IDENTIFIER 7
#define SCE_TCL_SUBSTITUTION 8
#define SCE_TCL_SUB_BRACE 9
#define SCE_TCL_MODIFIER 10
#define SCE_TCL_EXPAND 11
#define SCE_TCL_WORD 12
#define SCE_TCL_WORD2 13
#define SCE_TCL_WORD3 14
#define SCE_TCL_WORD4 15
#define SCE_TCL_WORD5 16
#define SCE_TCL_WORD6 17
#define SCE_TCL_WORD7 18
#define SCE_TCL_WORD8 19
#define SCE_TCL_COMMENT_BOX 20
#define SCE_TCL_BLOCK_COMMENT 21
#define SCE_H_DEFAULT 0
#define SCE_H_TAG 1
#define SCE_H_TAGUNKNOWN 2
#define SCE_H_ATTRIBUTE 3
#define SCE_H_ATTRIBUTEUNKNOWN 4
#define SCE_H_NUMBER 5
#define SCE_H_DOUBLESTRING 6
#define SCE_H_SINGLESTRING 7
#define SCE_H_OTHER 8
#define SCE_H_COMMENT 9
#define SCE_H_ENTITY 10
#define SCE_H_TAGEND 11
#define SCE_H_XMLSTART 12
#define SCE_H_XMLEND 13
#define SCE_H_SCRIPT 14
#define SCE_H_ASP 15
#define SCE_H_ASPAT 16
#define SCE_H_CDATA 17
#define SCE_H_QUESTION 18
#define SCE_H_VALUE 19
#define SCE_H_XCCOMMENT 20
#define SCE_H_SGML_DEFAULT 21
#define SCE_H_SGML_COMMAND 22
#define SCE_H_SGML_1ST_PARAM 23
#define SCE_H_SGML_DOUBLESTRING 24
#define SCE_H_SGML_SIMPLESTRING 25
#define SCE_H_SGML_ERROR 26
#define SCE_H_SGML_SPECIAL 27
#define SCE_H_SGML_ENTITY 28
#define SCE_H_SGML_COMMENT 29
#define SCE_H_SGML_1ST_PARAM_COMMENT 30
#define SCE_H_SGML_BLOCK_DEFAULT 31
#define SCE_HJ_START 40
#define SCE_HJ_DEFAULT 41
#define SCE_HJ_COMMENT 42
#define SCE_HJ_COMMENTLINE 43
#define SCE_HJ_COMMENTDOC 44
#define SCE_HJ_NUMBER 45
#define SCE_HJ_WORD 46
#define SCE_HJ_KEYWORD 47
#define SCE_HJ_DOUBLESTRING 48
#define SCE_HJ_SINGLESTRING 49
#define SCE_HJ_SYMBOLS 50
#define SCE_HJ_STRINGEOL 51
#define SCE_HJ_REGEX 52
#define SCE_HJ_TEMPLATELITERAL 53
#define SCE_HJA_START 55
#define SCE_HJA_DEFAULT 56
#define SCE_HJA_COMMENT 57
#define SCE_HJA_COMMENTLINE 58
#define SCE_HJA_COMMENTDOC 59
#define SCE_HJA_NUMBER 60
#define SCE_HJA_WORD 61
#define SCE_HJA_KEYWORD 62
#define SCE_HJA_DOUBLESTRING 63
#define SCE_HJA_SINGLESTRING 64
#define SCE_HJA_SYMBOLS 65
#define SCE_HJA_STRINGEOL 66
#define SCE_HJA_REGEX 67
#define SCE_HJA_TEMPLATELITERAL 68
#define SCE_HB_START 70
#define SCE_HB_DEFAULT 71
#define SCE_HB_COMMENTLINE 72
#define SCE_HB_NUMBER 73
#define SCE_HB_WORD 74
#define SCE_HB_STRING 75
#define SCE_HB_IDENTIFIER 76
#define SCE_HB_STRINGEOL 77
#define SCE_HB_OPERATOR 78
#define SCE_HBA_START 80
#define SCE_HBA_DEFAULT 81
#define SCE_HBA_COMMENTLINE 82
#define SCE_HBA_NUMBER 83
#define SCE_HBA_WORD 84
#define SCE_HBA_STRING 85
#define SCE_HBA_IDENTIFIER 86
#define SCE_HBA_STRINGEOL 87
#define SCE_HBA_OPERATOR 88
#define SCE_HP_START 90
#define SCE_HP_DEFAULT 91
#define SCE_HP_COMMENTLINE 92
#define SCE_HP_NUMBER 93
#define SCE_HP_STRING 94
#define SCE_HP_CHARACTER 95
#define SCE_HP_WORD 96
#define SCE_HP_TRIPLE 97
#define SCE_HP_TRIPLEDOUBLE 98
#define SCE_HP_CLASSNAME 99
#define SCE_HP_DEFNAME 100
#define SCE_HP_OPERATOR 101
#define SCE_HP_IDENTIFIER 102
#define SCE_HPA_START 105
#define SCE_HPA_DEFAULT 106
#define SCE_HPA_COMMENTLINE 107
#define SCE_HPA_NUMBER 108
#define SCE_HPA_STRING 109
#define SCE_HPA_CHARACTER 110
#define SCE_HPA_WORD 111
#define SCE_HPA_TRIPLE 112
#define SCE_HPA_TRIPLEDOUBLE 113
#define SCE_HPA_CLASSNAME 114
#define SCE_HPA_DEFNAME 115
#define SCE_HPA_OPERATOR 116
#define SCE_HPA_IDENTIFIER 117
#define SCE_HPHP_DEFAULT 118
#define SCE_HPHP_HSTRING 119
#define SCE_HPHP_SIMPLESTRING 120
#define SCE_HPHP_WORD 121
#define SCE_HPHP_NUMBER 122
#define SCE_HPHP_VARIABLE 123
#define SCE_HPHP_COMMENT 124
#define SCE_HPHP_COMMENTLINE 125
#define SCE_HPHP_HSTRING_VARIABLE 126
#define SCE_HPHP_OPERATOR 127
#define SCE_HPHP_HEREDOC 128
#define SCE_HPHP_NOWDOC 129
#define SCE_HPHP_COMPLEX_VARIABLE 130
#define SCE_PL_DEFAULT 0
#define SCE_PL_ERROR 1
#define SCE_PL_COMMENTLINE 2
#define SCE_PL_POD 3
#define SCE_PL_NUMBER 4
#define SCE_PL_WORD 5
#define SCE_PL_STRING 6
#define SCE_PL_CHARACTER 7
#define SCE_PL_PUNCTUATION 8
#define SCE_PL_PREPROCESSOR 9
#define SCE_PL_OPERATOR 10
#define SCE_PL_IDENTIFIER 11
#define SCE_PL_SCALAR 12
#define SCE_PL_ARRAY 13
#define SCE_PL_HASH 14
#define SCE_PL_SYMBOLTABLE 15
#define SCE_PL_VARIABLE_INDEXER 16
#define SCE_PL_REGEX 17
#define SCE_PL_REGSUBST 18
#define SCE_PL_LONGQUOTE 19
#define SCE_PL_BACKTICKS 20
#define SCE_PL_DATASECTION 21
#define SCE_PL_HERE_DELIM 22
#define SCE_PL_HERE_Q 23
#define SCE_PL_HERE_QQ 24
#define SCE_PL_HERE_QX 25
#define SCE_PL_STRING_Q 26
#define SCE_PL_STRING_QQ 27
#define SCE_PL_STRING_QX 28
#define SCE_PL_STRING_QR 29
#define SCE_PL_STRING_QW 30
#define SCE_PL_POD_VERB 31
#define SCE_PL_SUB_PROTOTYPE 40
#define SCE_PL_FORMAT_IDENT 41
#define SCE_PL_FORMAT 42
#define SCE_PL_STRING_VAR 43
#define SCE_PL_XLAT 44
#define SCE_PL_REGEX_VAR 54
#define SCE_PL_REGSUBST_VAR 55
#define SCE_PL_BACKTICKS_VAR 57
#define SCE_PL_HERE_QQ_VAR 61
#define SCE_PL_HERE_QX_VAR 62
#define SCE_PL_STRING_QQ_VAR 64
#define SCE_PL_STRING_QX_VAR 65
#define SCE_PL_STRING_QR_VAR 66
#define SCE_RB_DEFAULT 0
#define SCE_RB_ERROR 1
#define SCE_RB_COMMENTLINE 2
#define SCE_RB_POD 3
#define SCE_RB_NUMBER 4
#define SCE_RB_WORD 5
#define SCE_RB_STRING 6
#define SCE_RB_CHARACTER 7
#define SCE_RB_CLASSNAME 8
#define SCE_RB_DEFNAME 9
#define SCE_RB_OPERATOR 10
#define SCE_RB_IDENTIFIER 11
#define SCE_RB_REGEX 12
#define SCE_RB_GLOBAL 13
#define SCE_RB_SYMBOL 14
#define SCE_RB_MODULE_NAME 15
#define SCE_RB_INSTANCE_VAR 16
#define SCE_RB_CLASS_VAR 17
#define SCE_RB_BACKTICKS 18
#define SCE_RB_DATASECTION 19
#define SCE_RB_HERE_DELIM 20
#define SCE_RB_HERE_Q 21
#define SCE_RB_HERE_QQ 22
#define SCE_RB_HERE_QX 23
#define SCE_RB_STRING_Q 24
#define SCE_RB_STRING_QQ 25
#define SCE_RB_STRING_QX 26
#define SCE_RB_STRING_QR 27
#define SCE_RB_STRING_QW 28
#define SCE_RB_WORD_DEMOTED 29
#define SCE_RB_STDIN 30
#define SCE_RB_STDOUT 31
#define SCE_RB_STDERR 40
#define SCE_RB_UPPER_BOUND 41
#define SCE_RB_FUNCTION 42
#define SCE_B_DEFAULT 0
#define SCE_B_COMMENT 1
#define SCE_B_NUMBER 2
#define SCE_B_KEYWORD 3
#define SCE_B_STRING 4
#define SCE_B_PREPROCESSOR 5
#define SCE_B_OPERATOR 6
#define SCE_B_IDENTIFIER 7
#define SCE_B_DATE 8
#define SCE_B_STRINGEOL 9
#define SCE_B_KEYWORD2 10
#define SCE_B_KEYWORD3 11
#define SCE_B_KEYWORD4 12
#define SCE_B_CONSTANT 13
#define SCE_B_ASM 14
#define SCE_B_LABEL 15
#define SCE_B_ERROR 16
#define SCE_B_HEXNUMBER 17
#define SCE_B_BINNUMBER 18
#define SCE_B_OCTNUMBER 19
#define SCE_B_ATTRIBUTE 20
#define SCE_PROPS_DEFAULT 0
#define SCE_PROPS_COMMENT 1
#define SCE_PROPS_SECTION 2
#define SCE_PROPS_ASSIGNMENT 3
#define SCE_PROPS_DEFVAL 4
#define SCE_PROPS_KEY 5
#define SCE_L_DEFAULT 0
#define SCE_L_COMMAND 1
#define SCE_L_COMMENT 2
#define SCE_L_OPERATOR 3
#define SCE_L_SPECIAL 4
#define SCE_L_TITLE 5
#define SCE_L_CHAPTER 6
#define SCE_L_SECTION 7
#define SCE_L_SECTION1 8
#define SCE_L_SECTION2 9
#define SCE_L_COMMENT2 10
#define SCE_L_TAG 11
#define SCE_L_MATH 12
#define SCE_L_TAG2 13
#define SCE_L_MATH2 14
#define SCE_L_VERBATIM 15
#define SCE_L_SHORTCMD 16
#define SCE_L_CMDOPT 17
#define SCE_L_ERROR 18
#define SCE_L_STRING 19
#define SCE_L_LISTCODE 20
#define SCE_L_VERBATIM2 21
#define SCE_L_QUOTE1 22
#define SCE_L_QUOTE2 23
#define SCE_LUA_DEFAULT 0
#define SCE_LUA_COMMENT 1
#define SCE_LUA_COMMENTLINE 2
#define SCE_LUA_COMMENTDOC 3
#define SCE_LUA_NUMBER 4
#define SCE_LUA_WORD 5
#define SCE_LUA_STRING 6
#define SCE_LUA_CHARACTER 7
#define SCE_LUA_LITERALSTRING 8
#define SCE_LUA_PREPROCESSOR 9
#define SCE_LUA_OPERATOR 10
#define SCE_LUA_IDENTIFIER 11
#define SCE_LUA_STRINGEOL 12
#define SCE_LUA_WORD2 13
#define SCE_LUA_WORD3 14
#define SCE_LUA_WORD4 15
#define SCE_LUA_WORD5 16
#define SCE_LUA_WORD6 17
#define SCE_LUA_WORD7 18
#define SCE_LUA_WORD8 19
#define SCE_LUA_LABEL 20
#define SCE_LUA_FUNCTION 21
#define SCE_BAT_DEFAULT 0
#define SCE_BAT_COMMENT 1
#define SCE_BAT_IDENTIFIER 2
#define SCE_BAT_WORD 3
#define SCE_BAT_COMMAND 4
#define SCE_BAT_VARIABLE 5
#define SCE_BAT_LABEL 6
#define SCE_BAT_OPERATOR 7
#define SCE_BAT_STRINGDQ 8
#define SCE_BAT_STRINGSQ 9
#define SCE_BAT_STRINGBT 10
#define SCE_BAT_ESCAPE 11
#define SCE_BAT_LABEL_LINE 12
#define SCE_MAKE_DEFAULT 0
#define SCE_MAKE_COMMENT 1
#define SCE_MAKE_PREPROCESSOR 2
#define SCE_MAKE_IDENTIFIER 3
#define SCE_MAKE_OPERATOR 4
#define SCE_MAKE_TARGET 5
#define SCE_MAKE_MACRO 6
#define SCE_MAKE_FUNCTION 7
#define SCE_MAKE_COMMAND 8
#define SCE_MAKE_DIRECTIVE 9
#define SCE_MAKE_VARIABLE 10
#define SCE_MAKE_VARIABLE2 11
#define SCE_MAKE_VARIABLE3 12
#define SCE_MAKE_IDEOL 18
#define SCE_DIFF_DEFAULT 0
#define SCE_DIFF_COMMENT 1
#define SCE_DIFF_COMMAND 2
#define SCE_DIFF_HEADER 3
#define SCE_DIFF_POSITION 4
#define SCE_DIFF_DELETED 5
#define SCE_DIFF_ADDED 6
#define SCE_DIFF_CHANGED 7
#define SCE_DIFF_PATCH_ADD 8
#define SCE_DIFF_PATCH_DELETE 9
#define SCE_DIFF_REMOVED_PATCH_ADD 10
#define SCE_DIFF_REMOVED_PATCH_DELETE 11
#define SCE_CONF_DEFAULT 0
#define SCE_CONF_COMMENT 1
#define SCE_CONF_NUMBER 2
#define SCE_CONF_IDENTIFIER 3
#define SCE_CONF_EXTENSION 4
#define SCE_CONF_PARAMETER 5
#define SCE_CONF_STRING 6
#define SCE_CONF_OPERATOR 7
#define SCE_CONF_IP 8
#define SCE_CONF_DIRECTIVE 9
#define SCE_CONF_SECTION 10
#define SCE_CONF_HEXNUM 11
#define SCE_MAT_DEFAULT 0
#define SCE_MAT_COMMENT 1
#define SCE_MAT_COMMAND 2
#define SCE_MAT_NUMBER 3
#define SCE_MAT_KEYWORD 4
#define SCE_MAT_STRING 5
#define SCE_MAT_OPERATOR 6
#define SCE_MAT_IDENTIFIER 7
#define SCE_MAT_DOUBLEQUOTESTRING 8
#define SCE_MAT_COMMENTBLOCK 9
#define SCE_MAT_ATTRIBUTE 10
#define SCE_MAT_INTERNALCOMMAND 11
#define SCE_MAT_FUNCTION1 12
#define SCE_MAT_FUNCTION2 13
#define SCE_MAT_HEXNUM 14
#define SCE_MAT_CALLBACK 15
#define SCE_MAT_FUNCTION 16
#define SCE_FSHARP_DEFAULT 0
#define SCE_FSHARP_COMMENT 1
#define SCE_FSHARP_COMMENTLINE 2
#define SCE_FSHARP_IDENTIFIER 3
#define SCE_FSHARP_KEYWORD 4
#define SCE_FSHARP_TYPEKEYWORD 5
#define SCE_FSHARP_PREPROCESSOR 6
#define SCE_FSHARP_ATTRIBUTE 7
#define SCE_FSHARP_CHARACTER 8
#define SCE_FSHARP_STRING 9
#define SCE_FSHARP_STRINGEOL 10
#define SCE_FSHARP_VERBATIM 11
#define SCE_FSHARP_QUOTATION 12
#define SCE_FSHARP_NUMBER 13
#define SCE_FSHARP_OPERATOR 14
#define SCE_ASM_DEFAULT 0
#define SCE_ASM_COMMENT 1
#define SCE_ASM_NUMBER 2
#define SCE_ASM_STRING 3
#define SCE_ASM_OPERATOR 4
#define SCE_ASM_IDENTIFIER 5
#define SCE_ASM_CPUINSTRUCTION 6
#define SCE_ASM_MATHINSTRUCTION 7
#define SCE_ASM_REGISTER 8
#define SCE_ASM_DIRECTIVE 9
#define SCE_ASM_DIRECTIVEOPERAND 10
#define SCE_ASM_COMMENTBLOCK 11
#define SCE_ASM_CHARACTER 12
#define SCE_ASM_STRINGEOL 13
#define SCE_ASM_EXTINSTRUCTION 14
#define SCE_ASM_COMMENTDIRECTIVE 15
#define SCE_ASM_COMMENTLINE 16
#define SCE_ASM_COMMENT2 17
#define SCE_ASM_LABEL 18
#define SCE_ASM_PREPROCESSOR 19
#define SCE_ASM_HEXNUM 20
#define SCE_ASM_OCTNUM 21
#define SCE_ASM_BINNUM 22
#define SCE_SMALI_DEFAULT 0
#define SCE_SMALI_COMMENTLINE 2
#define SCE_SMALI_FIELD 3
#define SCE_SMALI_METHOD 4
#define SCE_SMALI_LABEL_EOL 5
#define SCE_SMALI_IDENTIFIER 7
#define SCE_SMALI_WORD 8
#define SCE_SMALI_TYPE 9
#define SCE_SMALI_DIRECTIVE 11
#define SCE_SMALI_OPERATOR 12
#define SCE_SMALI_CHARACTER 13
#define SCE_SMALI_STRING 14
#define SCE_SMALI_NUMBER 16
#define SCE_SMALI_LABEL 17
#define SCE_SMALI_INSTRUCTION 18
#define SCE_SMALI_REGISTER 19
#define SCE_F_DEFAULT 0
#define SCE_F_COMMENT 1
#define SCE_F_NUMBER 2
#define SCE_F_STRING1 3
#define SCE_F_STRING2 4
#define SCE_F_STRINGEOL 5
#define SCE_F_OPERATOR 6
#define SCE_F_IDENTIFIER 7
#define SCE_F_WORD 8
#define SCE_F_WORD2 9
#define SCE_F_WORD3 10
#define SCE_F_PREPROCESSOR 11
#define SCE_F_OPERATOR2 12
#define SCE_F_LABEL 13
#define SCE_F_CONTINUATION 14
#define SCE_CSS_DEFAULT 0
#define SCE_CSS_TAG 1
#define SCE_CSS_CLASS 2
#define SCE_CSS_PSEUDOCLASS 3
#define SCE_CSS_UNKNOWN_PSEUDOCLASS 4
#define SCE_CSS_OPERATOR 5
#define SCE_CSS_IDENTIFIER 6
#define SCE_CSS_UNKNOWN_IDENTIFIER 7
#define SCE_CSS_VALUE 8
#define SCE_CSS_COMMENT 9
#define SCE_CSS_ID 10
#define SCE_CSS_IMPORTANT 11
#define SCE_CSS_DIRECTIVE 12
#define SCE_CSS_DOUBLESTRING 13
#define SCE_CSS_SINGLESTRING 14
#define SCE_CSS_IDENTIFIER2 15
#define SCE_CSS_ATTRIBUTE 16
#define SCE_CSS_IDENTIFIER3 17
#define SCE_CSS_PSEUDOELEMENT 18
#define SCE_CSS_EXTENDED_IDENTIFIER 19
#define SCE_CSS_EXTENDED_PSEUDOCLASS 20
#define SCE_CSS_EXTENDED_PSEUDOELEMENT 21
#define SCE_CSS_MEDIA 22
#define SCE_CSS_VARIABLE 23
#define SCE_NSIS_DEFAULT 0
#define SCE_NSIS_COMMENT 1
#define SCE_NSIS_COMMENTLINE 2
#define SCE_NSIS_TASKMARKER 3
#define SCE_NSIS_IDENTIFIER 4
#define SCE_NSIS_WORD 5
#define SCE_NSIS_PREPROCESSOR 6
#define SCE_NSIS_OPERATOR 7
#define SCE_NSIS_NUMBER 8
#define SCE_NSIS_STRINGDQ 9
#define SCE_NSIS_STRINGSQ 10
#define SCE_NSIS_STRINGBT 11
#define SCE_NSIS_ESCAPECHAR 12
#define SCE_NSIS_VARIABLE 13
#define SCE_NSIS_VARIABLE_BRACE 14
#define SCE_NSIS_VARIABLE_PAREN 15
#define SCE_NSIS_LABEL 16
#define SCE_NSIS_INSTRUCTION 17
#define SCE_YAML_DEFAULT 0
#define SCE_YAML_COMMENT 1
#define SCE_YAML_IDENTIFIER 2
#define SCE_YAML_KEYWORD 3
#define SCE_YAML_NUMBER 4
#define SCE_YAML_ANCHOR 5
#define SCE_YAML_ALIAS 6
#define SCE_YAML_TEXT 7
#define SCE_YAML_ERROR 8
#define SCE_YAML_OPERATOR 9
#define SCE_YAML_DIRECTIVE 10
#define SCE_YAML_STRING_SQ 11
#define SCE_YAML_STRING_DQ 12
#define SCE_YAML_ESCAPECHAR 13
#define SCE_YAML_KEY 14
#define SCE_YAML_BLOCK_SCALAR 15
#define SCE_YAML_TAG 16
#define SCE_YAML_VERBATIM_TAG 17
#define SCE_YAML_DATETIME 18
#define SCE_YAML_INDENTED_TEXT 19
#define SCE_YAML_DOCUMENT 20
#define SCE_V_DEFAULT 0
#define SCE_V_COMMENT 1
#define SCE_V_COMMENTLINE 2
#define SCE_V_COMMENTLINEBANG 3
#define SCE_V_NUMBER 4
#define SCE_V_WORD 5
#define SCE_V_STRING 6
#define SCE_V_WORD2 7
#define SCE_V_WORD3 8
#define SCE_V_PREPROCESSOR 9
#define SCE_V_OPERATOR 10
#define SCE_V_IDENTIFIER 11
#define SCE_V_STRINGEOL 12
#define SCE_V_USER 19
#define SCE_V_COMMENT_WORD 20
#define SCE_V_INPUT 21
#define SCE_V_OUTPUT 22
#define SCE_V_INOUT 23
#define SCE_V_PORT_CONNECT 24
#define SCE_AU3_DEFAULT 0
#define SCE_AU3_COMMENT 1
#define SCE_AU3_COMMENTBLOCK 2
#define SCE_AU3_NUMBER 3
#define SCE_AU3_FUNCTION 4
#define SCE_AU3_KEYWORD 5
#define SCE_AU3_MACRO 6
#define SCE_AU3_STRING 7
#define SCE_AU3_OPERATOR 8
#define SCE_AU3_VARIABLE 9
#define SCE_AU3_SENT 10
#define SCE_AU3_PREPROCESSOR 11
#define SCE_AU3_SPECIAL 12
#define SCE_AU3_EXPAND 13
#define SCE_AU3_COMOBJ 14
#define SCE_AU3_UDF 15
#define SCE_SH_DEFAULT 0
#define SCE_SH_ERROR 1
#define SCE_SH_COMMENTLINE 2
#define SCE_SH_NUMBER 3
#define SCE_SH_WORD 4
#define SCE_SH_STRING 5
#define SCE_SH_CHARACTER 6
#define SCE_SH_OPERATOR 7
#define SCE_SH_IDENTIFIER 8
#define SCE_SH_SCALAR 9
#define SCE_SH_PARAM 10
#define SCE_SH_BACKTICKS 11
#define SCE_SH_HERE_DELIM 12
#define SCE_SH_HERE_Q 13
#define SCE_VHDL_DEFAULT 0
#define SCE_VHDL_COMMENT 1
#define SCE_VHDL_COMMENTLINEBANG 2
#define SCE_VHDL_NUMBER 3
#define SCE_VHDL_STRING 4
#define SCE_VHDL_OPERATOR 5
#define SCE_VHDL_IDENTIFIER 6
#define SCE_VHDL_STRINGEOL 7
#define SCE_VHDL_KEYWORD 8
#define SCE_VHDL_STDOPERATOR 9
#define SCE_VHDL_ATTRIBUTE 10
#define SCE_VHDL_STDFUNCTION 11
#define SCE_VHDL_STDPACKAGE 12
#define SCE_VHDL_STDTYPE 13
#define SCE_VHDL_USERWORD 14
#define SCE_VHDL_BLOCK_COMMENT 15
#define SCE_REBOL_DEFAULT 0
#define SCE_REBOL_COMMENTLINE 1
#define SCE_REBOL_COMMENTBLOCK 2
#define SCE_REBOL_BINARYCOMMENT 3
#define SCE_REBOL_TASKMARKER 4
#define SCE_REBOL_BRACEDSTRING 5
#define SCE_REBOL_PREFACE 6
#define SCE_REBOL_OPERATOR 7
#define SCE_REBOL_CHARACTER 8
#define SCE_REBOL_QUOTEDSTRING 9
#define SCE_REBOL_TAG_VALUE 10
#define SCE_REBOL_QUOTEDFILE 11
#define SCE_REBOL_NUMBER 12
#define SCE_REBOL_PAIR 13
#define SCE_REBOL_TUPLE 14
#define SCE_REBOL_MONEY 15
#define SCE_REBOL_DATE 16
#define SCE_REBOL_TIME 17
#define SCE_REBOL_ESCAPECHAR 18
#define SCE_REBOL_BINARY 19
#define SCE_REBOL_ISSUE 20
#define SCE_REBOL_SYMBOL 21
#define SCE_REBOL_TAG 22
#define SCE_REBOL_TAG_ATTR 23
#define SCE_REBOL_FILE 24
#define SCE_REBOL_EMAIL 25
#define SCE_REBOL_URL 26
#define SCE_REBOL_IDENTIFIER 27
#define SCE_REBOL_WORD 28
#define SCE_REBOL_DIRECTIVE 29
#define SCE_REBOL_TYPE 30
#define SCE_REBOL_PROPERTY 31
#define SCE_REBOL_MACRO 40
#define SCE_SQL_DEFAULT 0
#define SCE_SQL_COMMENT 1
#define SCE_SQL_COMMENTLINE 2
#define SCE_SQL_COMMENTDOC 3
#define SCE_SQL_NUMBER 4
#define SCE_SQL_WORD 5
#define SCE_SQL_STRING 6
#define SCE_SQL_CHARACTER 7
#define SCE_SQL_SQLPLUS 8
#define SCE_SQL_SQLPLUS_PROMPT 9
#define SCE_SQL_OPERATOR 10
#define SCE_SQL_IDENTIFIER 11
#define SCE_SQL_SQLPLUS_COMMENT 13
#define SCE_SQL_COMMENTLINEDOC 15
#define SCE_SQL_WORD2 16
#define SCE_SQL_COMMENTDOCKEYWORD 17
#define SCE_SQL_COMMENTDOCKEYWORDERROR 18
#define SCE_SQL_USER1 19
#define SCE_SQL_USER2 20
#define SCE_SQL_USER3 21
#define SCE_SQL_USER4 22
#define SCE_SQL_QUOTEDIDENTIFIER 23
#define SCE_SQL_VARIABLE 24
#define SCE_SQL_HEX 25
#define SCE_SQL_HEX2 26
#define SCE_SQL_BIT 27
#define SCE_SQL_BIT2 28
#define SCE_SQL_QOPERATOR 29
#define SCE_SQL_ESCAPECHAR 30
#define SCE_INNO_DEFAULT 0
#define SCE_INNO_COMMENT 1
#define SCE_INNO_KEYWORD 2
#define SCE_INNO_PARAMETER 3
#define SCE_INNO_SECTION 4
#define SCE_INNO_PREPROC 5
#define SCE_INNO_INLINE_EXPANSION 6
#define SCE_INNO_COMMENT_PASCAL 7
#define SCE_INNO_KEYWORD_PASCAL 8
#define SCE_INNO_KEYWORD_USER 9
#define SCE_INNO_STRING_DOUBLE 10
#define SCE_INNO_STRING_SINGLE 11
#define SCE_INNO_IDENTIFIER 12
#define SCE_INNO_OPERATOR 13
#define SCE_INNO_NUMBER 14
#define SCE_INNO_PAS_TYPE 15
#define SCE_CMAKE_DEFAULT 0
#define SCE_CMAKE_COMMENT 1
#define SCE_CMAKE_TASKMARKER 2
#define SCE_CMAKE_IDENTIFIER 3
#define SCE_CMAKE_WORD 4
#define SCE_CMAKE_COMMANDS 5
#define SCE_CMAKE_OPERATOR 6
#define SCE_CMAKE_STRING 7
#define SCE_CMAKE_VARIABLE_AT 8
#define SCE_CMAKE_VARIABLE_DOLLAR 9
#define SCE_CMAKE_PARAMETERS 10
#define SCE_CMAKE_VARIABLE 11
#define SCE_CMAKE_FUNCATION 12
#define SCE_CMAKE_MACRO 13
#define SCE_CMAKE_NUMBER 14
#define SCE_CMAKE_ESCAPE_SEQUENCE 15
#define SCE_CMAKE_LINE_CONTINUE 16
#define SCE_CMAKE_BLOCK_COMMENT 17
#define SCE_CMAKE_BRACKET_ARGUMENT 18
#define SCE_CMAKE_PROPERTIES 19
#define SCE_CMAKE_VALUES 20
#define SCE_R_DEFAULT 0
#define SCE_R_COMMENT 1
#define SCE_R_TASKMARKER 2
#define SCE_R_KEYWORD 3
#define SCE_R_WORD2 4
#define SCE_R_OPERATOR 5
#define SCE_R_NUMBER 6
#define SCE_R_STRING 7
#define SCE_R_STRING2 8
#define SCE_R_WORD3 9
#define SCE_R_IDENTIFIER 10
#define SCE_R_INFIX 11
#define SCE_R_ESCAPECHAR 12
#define SCE_R_BACKTICKS 13
#define SCE_R_DIRECTIVE 14
#define SCE_R_FUNCTION 15
#define SCE_POWERSHELL_DEFAULT 0
#define SCE_POWERSHELL_COMMENT 1
#define SCE_POWERSHELL_STRING 2
#define SCE_POWERSHELL_CHARACTER 3
#define SCE_POWERSHELL_NUMBER 4
#define SCE_POWERSHELL_VARIABLE 5
#define SCE_POWERSHELL_OPERATOR 6
#define SCE_POWERSHELL_IDENTIFIER 7
#define SCE_POWERSHELL_KEYWORD 8
#define SCE_POWERSHELL_CMDLET 9
#define SCE_POWERSHELL_ALIAS 10
#define SCE_POWERSHELL_FUNCTION 11
#define SCE_POWERSHELL_USER1 12
#define SCE_POWERSHELL_COMMENTSTREAM 13
#define SCE_PAS_DEFAULT 0
#define SCE_PAS_IDENTIFIER 1
#define SCE_PAS_COMMENT 2
#define SCE_PAS_COMMENT2 3
#define SCE_PAS_COMMENTLINE 4
#define SCE_PAS_PREPROCESSOR 5
#define SCE_PAS_PREPROCESSOR2 6
#define SCE_PAS_NUMBER 7
#define SCE_PAS_HEXNUMBER 8
#define SCE_PAS_WORD 9
#define SCE_PAS_STRING 10
#define SCE_PAS_STRINGEOL 11
#define SCE_PAS_CHARACTER 12
#define SCE_PAS_OPERATOR 13
#define SCE_PAS_ASM 14
#define SCE_PAS_TYPE 15
#define SCE_PAS_FUNCTION1 16
#define SCE_PAS_FUNCTION 17
#define SCE_AVS_DEFAULT 0
#define SCE_AVS_COMMENTBLOCK 1
#define SCE_AVS_COMMENTBLOCKN 2
#define SCE_AVS_COMMENTLINE 3
#define SCE_AVS_TASKMARKER 4
#define SCE_AVS_NUMBER 5
#define SCE_AVS_OPERATOR 6
#define SCE_AVS_IDENTIFIER 7
#define SCE_AVS_STRING 8
#define SCE_AVS_TRIPLESTRING 9
#define SCE_AVS_KEYWORD 10
#define SCE_AVS_FILTER 11
#define SCE_AVS_PLUGIN 12
#define SCE_AVS_FUNCTION 13
#define SCE_AVS_CLIPPROP 14
#define SCE_AVS_USERDFN 15
#define SCE_AVS_ESCAPESTRING 16
#define SCE_AVS_ESCAPECHAR 17
#define SCE_RUST_DEFAULT 0
#define SCE_RUST_COMMENTBLOCK 1
#define SCE_RUST_COMMENTLINE 2
#define SCE_RUST_COMMENTBLOCKDOC 3
#define SCE_RUST_COMMENTLINEDOC 4
#define SCE_RUST_TASKMARKER 5
#define SCE_RUST_NUMBER 6
#define SCE_RUST_WORD 7
#define SCE_RUST_WORD2 8
#define SCE_RUST_TYPE 9
#define SCE_RUST_STRUCT 10
#define SCE_RUST_TRAIT 11
#define SCE_RUST_ENUMERATION 12
#define SCE_RUST_UNION 13
#define SCE_RUST_STRING 14
#define SCE_RUST_RAW_STRING 15
#define SCE_RUST_CHARACTER 16
#define SCE_RUST_OPERATOR 17
#define SCE_RUST_IDENTIFIER 18
#define SCE_RUST_LIFETIME 19
#define SCE_RUST_MACRO 20
#define SCE_RUST_LEXERROR 21
#define SCE_RUST_BYTESTRING 22
#define SCE_RUST_RAW_BYTESTRING 23
#define SCE_RUST_BYTE_CHARACTER 24
#define SCE_RUST_ESCAPECHAR 25
#define SCE_RUST_FUNCTION 26
#define SCE_RUST_VARIABLE 27
#define SCE_RUST_ATTRIBUTE 28
#define SCE_RUST_CONSTANT 29
#define SCE_RUST_LINE_CONTINUATION 30
#define SCE_RUST_FUNCTION_DEFINE 31
#define SCE_JSON_DEFAULT 0
#define SCE_JSON_OPERATOR 1
#define SCE_JSON_NUMBER 2
#define SCE_JSON_MAYBE_KEYWORD 3
#define SCE_JSON_IDENTIFIER 4
#define SCE_JSON_STRING 5
#define SCE_JSON_CHARACTER 6
#define SCE_JSON_LINECOMMENT 7
#define SCE_JSON_BLOCKCOMMENT 8
#define SCE_JSON_ESCAPESEQUENCE 9
#define SCE_JSON_PROPERTYNAME 10
#define SCE_JSON_KEYWORD 11
#define SCE_VIM_DEFAULT 0
#define SCE_VIM_COMMENTLINE 1
#define SCE_VIM_TASKMARKER 2
#define SCE_VIM_NUMBER 3
#define SCE_VIM_OPERATOR 4
#define SCE_VIM_IDENTIFIER 5
#define SCE_VIM_WORD 6
#define SCE_VIM_WORD_DEMOTED 7
#define SCE_VIM_COMMANDS 8
#define SCE_VIM_STRING 9
#define SCE_VIM_CHARACTER 10
#define SCE_VIM_ESCAPECHAR 11
#define SCE_VIM_BLOB_HEX 12
#define SCE_VIM_REGEX 13
#define SCE_VIM_FUNCTION 14
#define SCE_VIM_ENV_VARIABLE 15
#define SCE_VIM_OPTION 16
#define SCE_VIM_REGISTER 17
#define SCE_VIM_HEREDOC 18
#define SCE_KOTLIN_DEFAULT 0
#define SCE_KOTLIN_COMMENTLINE 1
#define SCE_KOTLIN_COMMENTLINEDOC 2
#define SCE_KOTLIN_COMMENTBLOCK 3
#define SCE_KOTLIN_COMMENTBLOCKDOC 4
#define SCE_KOTLIN_COMMENTDOCWORD 5
#define SCE_KOTLIN_TASKMARKER 6
#define SCE_KOTLIN_NUMBER 7
#define SCE_KOTLIN_OPERATOR 8
#define SCE_KOTLIN_OPERATOR2 9
#define SCE_KOTLIN_CHARACTER 10
#define SCE_KOTLIN_STRING 11
#define SCE_KOTLIN_RAWSTRING 12
#define SCE_KOTLIN_ESCAPECHAR 13
#define SCE_KOTLIN_RAWSTRINGSTART 14
#define SCE_KOTLIN_RAWSTRINGEND 15
#define SCE_KOTLIN_BACKTICKS 16
#define SCE_KOTLIN_VARIABLE 17
#define SCE_KOTLIN_ANNOTATION 18
#define SCE_KOTLIN_LABEL 19
#define SCE_KOTLIN_IDENTIFIER 20
#define SCE_KOTLIN_WORD 21
#define SCE_KOTLIN_CLASS 22
#define SCE_KOTLIN_INTERFACE 23
#define SCE_KOTLIN_ENUM 24
#define SCE_KOTLIN_FUNCTION 25
#define SCE_JULIA_DEFAULT 0
#define SCE_JULIA_COMMENTLINE 1
#define SCE_JULIA_COMMENTBLOCK 2
#define SCE_JULIA_TASKMARKER 3
#define SCE_JULIA_NUMBER 4
#define SCE_JULIA_OPERATOR 5
#define SCE_JULIA_OPERATOR2 6
#define SCE_JULIA_IDENTIFIER 7
#define SCE_JULIA_CHARACTER 8
#define SCE_JULIA_TRIPLE_STRINGSTART 9
#define SCE_JULIA_TRIPLE_BACKTICKSSTART 10
#define SCE_JULIA_STRING 11
#define SCE_JULIA_TRIPLE_STRING 12
#define SCE_JULIA_BACKTICKS 13
#define SCE_JULIA_TRIPLE_BACKTICKS 14
#define SCE_JULIA_ESCAPECHAR 15
#define SCE_JULIA_RAWSTRING 16
#define SCE_JULIA_TRIPLE_RAWSTRING 17
#define SCE_JULIA_BYTESTRING 18
#define SCE_JULIA_TRIPLE_BYTESTRING 19
#define SCE_JULIA_REGEX 20
#define SCE_JULIA_TRIPLE_REGEX 21
#define SCE_JULIA_TRIPLE_STRINGEND 22
#define SCE_JULIA_TRIPLE_BACKTICKSEND 23
#define SCE_JULIA_VARIABLE 24
#define SCE_JULIA_MACRO 25
#define SCE_JULIA_SYMBOL 26
#define SCE_JULIA_FUNCTION 27
#define SCE_JULIA_WORD 28
#define SCE_JULIA_WORD_DEMOTED 29
#define SCE_JULIA_TYPE 30
#define SCE_JULIA_CONSTANT 31
#define SCE_JULIA_BASIC_FUNCTION 40
#define SCE_JULIA_FUNCTION_DEFINE 41
#define SCE_LLVM_DEFAULT 0
#define SCE_LLVM_COMMENTLINE 1
#define SCE_LLVM_TASKMARKER 2
#define SCE_LLVM_NUMBER 3
#define SCE_LLVM_IDENTIFIER 4
#define SCE_LLVM_OPERATOR 5
#define SCE_LLVM_STRING 6
#define SCE_LLVM_ESCAPECHAR 7
#define SCE_LLVM_COMDAT 8
#define SCE_LLVM_METADATA 9
#define SCE_LLVM_META_STRING 10
#define SCE_LLVM_ATTRIBUTE_GROUP 11
#define SCE_LLVM_VARIABLE 12
#define SCE_LLVM_GLOBAL_VARIABLE 13
#define SCE_LLVM_QUOTED_VARIABLE 14
#define SCE_LLVM_QUOTED_GLOBAL_VARIABLE 15
#define SCE_LLVM_ATTRIBUTE 16
#define SCE_LLVM_INSTRUCTION 17
#define SCE_LLVM_INTRINSIC 18
#define SCE_LLVM_FUNCTION 19
#define SCE_LLVM_WORD 20
#define SCE_LLVM_WORD2 21
#define SCE_LLVM_TYPE 22
#define SCE_LLVM_LABEL 23
#define SCE_WASM_DEFAULT 0
#define SCE_WASM_COMMENTLINE 1
#define SCE_WASM_COMMENTBLOCK 2
#define SCE_WASM_TASKMARKER 3
#define SCE_WASM_NUMBER 4
#define SCE_WASM_OPERATOR 5
#define SCE_WASM_IDENTIFIER 6
#define SCE_WASM_STRING 7
#define SCE_WASM_ESCAPECHAR 8
#define SCE_WASM_INSTRUCTION 9
#define SCE_WASM_WORD 10
#define SCE_WASM_KEYWORD 11
#define SCE_WASM_TYPE 12
#define SCE_TOML_DEFAULT 0
#define SCE_TOML_COMMENT 1
#define SCE_TOML_IDENTIFIER 2
#define SCE_TOML_KEYWORD 3
#define SCE_TOML_NUMBER 4
#define SCE_TOML_TABLE 5
#define SCE_TOML_KEY 6
#define SCE_TOML_ERROR 7
#define SCE_TOML_OPERATOR 8
#define SCE_TOML_STRING_SQ 9
#define SCE_TOML_STRING_DQ 10
#define SCE_TOML_ESCAPECHAR 11
#define SCE_TOML_TRIPLE_STRING_SQ 12
#define SCE_TOML_TRIPLE_STRING_DQ 13
#define SCE_TOML_DATETIME 14
#define SCE_GN_DEFAULT 0
#define SCE_GN_COMMENT 1
#define SCE_GN_TASKMARKER 2
#define SCE_GN_IDENTIFIER 3
#define SCE_GN_NUMBER 4
#define SCE_GN_OPERATOR 5
#define SCE_GN_OPERATOR2 6
#define SCE_GN_STRING 7
#define SCE_GN_ESCAPECHAR 8
#define SCE_GN_VARIABLE 9
#define SCE_GN_PLACEHOLDER 10
#define SCE_GN_KEYWORD 11
#define SCE_GN_BUILTIN_VARIABLE 12
#define SCE_GN_BUILTIN_FUNCTION 13
#define SCE_GN_FUNCTION 14
#define SCE_GO_DEFAULT 0
#define SCE_GO_COMMENTLINE 1
#define SCE_GO_COMMENTBLOCK 2
#define SCE_GO_TASKMARKERLINE 4
#define SCE_GO_TASKMARKER 5
#define SCE_GO_STRING 6
#define SCE_GO_CHARACTER 7
#define SCE_GO_ESCAPECHAR 8
#define SCE_GO_RAW_STRING 9
#define SCE_GO_NUMBER 10
#define SCE_GO_OPERATOR 11
#define SCE_GO_OPERATOR2 12
#define SCE_GO_LABEL 13
#define SCE_GO_IDENTIFIER 14
#define SCE_GO_WORD 15
#define SCE_GO_WORD2 16
#define SCE_GO_BUILTIN_FUNC 17
#define SCE_GO_TYPE 18
#define SCE_GO_STRUCT 19
#define SCE_GO_INTERFACE 20
#define SCE_GO_CONSTANT 21
#define SCE_GO_FUNCTION 22
#define SCE_GO_FUNCTION_DEFINE 23
#define SCE_GO_FORMAT_SPECIFIER 24
#define SCE_DART_DEFAULT 0
#define SCE_DART_COMMENTLINE 1
#define SCE_DART_COMMENTLINEDOC 2
#define SCE_DART_COMMENTBLOCK 3
#define SCE_DART_COMMENTBLOCKDOC 4
#define SCE_DART_TASKMARKER 5
#define SCE_DART_NUMBER 6
#define SCE_DART_OPERATOR 7
#define SCE_DART_OPERATOR2 8
#define SCE_DART_IDENTIFIER 9
#define SCE_DART_ESCAPECHAR 10
#define SCE_DART_STRING_SQ 11
#define SCE_DART_STRING_DQ 12
#define SCE_DART_TRIPLE_STRING_SQ 13
#define SCE_DART_TRIPLE_STRING_DQ 14
#define SCE_DART_RAWSTRING_SQ 15
#define SCE_DART_RAWSTRING_DQ 16
#define SCE_DART_TRIPLE_RAWSTRING_SQ 17
#define SCE_DART_TRIPLE_RAWSTRING_DQ 18
#define SCE_DART_TRIPLE_STRING_SQSTART 19
#define SCE_DART_TRIPLE_STRING_DQSTART 20
#define SCE_DART_TRIPLE_STRING_SQEND 21
#define SCE_DART_TRIPLE_STRING_DQEND 22
#define SCE_DART_SYMBOL_OPERATOR 23
#define SCE_DART_SYMBOL_IDENTIFIER 24
#define SCE_DART_VARIABLE 25
#define SCE_DART_METADATA 26
#define SCE_DART_LABEL 27
#define SCE_DART_FUNCTION 28
#define SCE_DART_WORD 29
#define SCE_DART_WORD2 30
#define SCE_DART_CLASS 31
#define SCE_DART_ENUM 40
#define SCE_SWIFT_DEFAULT 0
#define SCE_SWIFT_COMMENTLINE 1
#define SCE_SWIFT_COMMENTLINEDOC 2
#define SCE_SWIFT_COMMENTBLOCK 3
#define SCE_SWIFT_COMMENTBLOCKDOC 4
#define SCE_SWIFT_TASKMARKER 5
#define SCE_SWIFT_NUMBER 6
#define SCE_SWIFT_OPERATOR 7
#define SCE_SWIFT_OPERATOR2 8
#define SCE_SWIFT_IDENTIFIER 9
#define SCE_SWIFT_IDENTIFIER_BT 10
#define SCE_SWIFT_STRING 11
#define SCE_SWIFT_TRIPLE_STRING 12
#define SCE_SWIFT_STRING_ED 13
#define SCE_SWIFT_TRIPLE_STRING_ED 14
#define SCE_SWIFT_ESCAPECHAR 15
#define SCE_SWIFT_TRIPLE_STRINGSTART 16
#define SCE_SWIFT_TRIPLE_STRING_EDSTART 17
#define SCE_SWIFT_TRIPLE_STRINGEND 18
#define SCE_SWIFT_TRIPLE_STRING_EDEND 19
#define SCE_SWIFT_DIRECTIVE 20
#define SCE_SWIFT_ATTRIBUTE 21
#define SCE_SWIFT_VARIABLE 22
#define SCE_SWIFT_LABEL 23
#define SCE_SWIFT_FUNCTION 24
#define SCE_SWIFT_WORD 25
#define SCE_SWIFT_CLASS 26
#define SCE_SWIFT_STRUCT 27
#define SCE_SWIFT_PROTOCOL 28
#define SCE_SWIFT_ENUM 29
#define SCE_SWIFT_FUNCTION_DEFINE 30
#define SCE_SWIFT_OTHER_DIRECTIVE 31
#define SCE_SWIFT_OTHER_ATTRIBUTE 40
#define SCE_JS_DEFAULT 0
#define SCE_JS_COMMENTLINE 1
#define SCE_JS_COMMENTLINEDOC 2
#define SCE_JS_COMMENTBLOCK 3
#define SCE_JS_COMMENTBLOCKDOC 4
#define SCE_JS_COMMENTTAGAT 5
#define SCE_JS_COMMENTTAGXML 6
#define SCE_JS_TASKMARKER 7
#define SCE_JS_ESCAPECHAR 8
#define SCE_JS_REGEX 9
#define SCE_JS_STRING_BTSTART 10
#define SCE_JS_STRING_BT 11
#define SCE_JSX_TEXT 12
#define SCE_JS_STRING_SQ 13
#define SCE_JS_STRING_DQ 14
#define SCE_JSX_STRING_SQ 15
#define SCE_JSX_STRING_DQ 16
#define SCE_JS_STRING_BTEND 17
#define SCE_JS_OPERATOR 18
#define SCE_JS_OPERATOR2 19
#define SCE_JS_OPERATOR_PF 20
#define SCE_JS_NUMBER 21
#define SCE_JS_IDENTIFIER 22
#define SCE_JSX_TAG 23
#define SCE_JSX_ATTRIBUTE 24
#define SCE_JSX_ATTRIBUTE_AT 25
#define SCE_JS_DECORATOR 26
#define SCE_JS_FUNCTION_DEFINE 27
#define SCE_JS_FUNCTION 28
#define SCE_JS_WORD 29
#define SCE_JS_WORD2 30
#define SCE_JS_DIRECTIVE 31
#define SCE_JS_CLASS 40
#define SCE_JS_INTERFACE 41
#define SCE_JS_ENUM 42
#define SCE_JS_CONSTANT 43
#define SCE_JS_LABEL 44
#define SCE_JAVA_DEFAULT 0
#define SCE_JAVA_COMMENTLINE 1
#define SCE_JAVA_COMMENTLINEDOC 2
#define SCE_JAVA_COMMENTBLOCK 3
#define SCE_JAVA_COMMENTBLOCKDOC 4
#define SCE_JAVA_COMMENTTAGAT 5
#define SCE_JAVA_COMMENTTAGHTML 6
#define SCE_JAVA_TASKMARKER 7
#define SCE_JAVA_NUMBER 8
#define SCE_JAVA_OPERATOR 9
#define SCE_JAVA_CHARACTER 10
#define SCE_JAVA_STRING 11
#define SCE_JAVA_TRIPLE_STRING 12
#define SCE_JAVA_ESCAPECHAR 13
#define SCE_JAVA_FORMAT_SPECIFIER 14
#define SCE_JAVA_PLACEHOLDER 15
#define SCE_JAVA_ANNOTATION 16
#define SCE_JAVA_IDENTIFIER 17
#define SCE_JAVA_WORD 18
#define SCE_JAVA_WORD2 20
#define SCE_JAVA_DIRECTIVE 21
#define SCE_JAVA_CLASS 22
#define SCE_JAVA_INTERFACE 23
#define SCE_JAVA_ENUM 24
#define SCE_JAVA_FUNCTION 25
#define SCE_JAVA_CONSTANT 26
#define SCE_JAVA_LABEL 27
/* --Autogenerated -- end of section automatically generated from SciLexer.iface */
