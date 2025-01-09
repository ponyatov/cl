#pragma once

/// @defgroup syntax syntax
/// @brief script parser
/// @ingroup core
/// @{

/// @name lexer
/// @{
extern int yylex();
/// @}

/// @name parser
/// @{
extern int yyparse();
extern void yyerror(const char *msg);
/// @}

/// @}
