%{
    #include "cl.hpp"
    char *yyfile = nullptr;
%}

%option noyywrap yylineno

s [+\-]                  // sign
n [0-9]                  // digit

%%
#[^\n]*     {}              // line comment
[ \t\r\n]+  {}              // drop spaces

[+\-]?[0-9]+        { yylval.n = atoi(yytext); return INT; }

.           {yyerror("");}  // any undetected char
