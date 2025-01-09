%{
    #include "cl.hpp"
    #include <string>
    char *yyfile = nullptr;
%}

%option noyywrap yylineno

s [+\-]
d [0-9]
n {s}?{d}

%%
#[^\n]*     {}              // line comment
[ \t\r\n]+  {}              // drop spaces

"0x"[0-9a-fA-F]+     { yylval.u = std::stol(&yytext[2],nullptr,0x10); return UINT; }

{n}(\.{d}+)?[eE]{n}  { yylval.f = atof(yytext); return FLO; }
{n}(\.{d}+)          { yylval.f = atof(yytext); return FLO; }
{n}                  { yylval.n = atoi(yytext); return INT; }

.           {yyerror("");}  // any undetected char
