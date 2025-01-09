%{
    #include "cl.hpp"
%}

%defines %union { char c; int n; float f; char* s; }

%token <n> INT
%token <f> FLO

%%
syntax: | syntax ex { vm.dump(); }

ex :  INT    { vm.push($1); }
   |  FLO    { vm.push($1); }
