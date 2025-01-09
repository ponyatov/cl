#pragma once

/// @defgroup syntax syntax
/// @brief script parser
/// @ingroup core
/// @{

/// @name lexer
/// @{
extern int yylex();   ///< lexer
extern int yylineno;  ///< current line
extern char *yytext;  ///< current lexeme
extern char *yyfile;  ///< current script file name
extern FILE *yyin;    ///< file handler
/// @}

/// @name parser
/// @{
extern int yyparse();                  ///< parser
extern void yyerror(const char *msg);  ///< syntax error callback
#include "cl.parser.hpp"
/// @}

/// @}
