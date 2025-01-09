%{
    #include "cl.hpp"
%}

%defines %union { char c; int32_t n; uint32_t u; float f; char* s; }

%token <n> INT
%token <u> UINT
%token <f> FLO

%%
syntax: | syntax ex { vm.dump(); }

ex :  INT    { vm.push($1); }
   | UINT    { vm.push($1); }
   |  FLO    { vm.fpush($1); }
