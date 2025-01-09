%{
    #include "cl.hpp"
%}

%defines %union { char c; int n; float f; char* s; }

%token <n> INT

%%
syntax: | syntax ex { vm.dump(); }

ex : INT    { vm.push($1); }
