%{
    #include "cl.hpp"
    char *yyfile = nullptr;
%}

%option noyywrap yylineno

s [+\-]
d [0-9]
n {s}?{d}

%%
#[^\n]*     {}              // line comment
[ \t\r\n]+  {}              // drop spaces

{n}(\.{d}+)?[eE]{n}  { BEGIN(INITIAL); yylval.f = atof(yytext); return FLO; }
{n}(\.{d}+)          { BEGIN(INITIAL); yylval.f = atof(yytext); return FLO; }
{n}                  { BEGIN(INITIAL); yylval.n = atoi(yytext); return INT; }

.           {yyerror("");}  // any undetected char
