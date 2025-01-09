#include "cl.hpp"

VM vm;

void VM::push(int n) {
    assert(Dp < Dsz);
    D[Dp++] = n;
}

void VM::dump() {
    fprintf(stderr, "\nD:[ ");
    for (int i = 0; i < Dp; i++) fprintf(stderr, "%i ", D[i]);
    fprintf(stderr, "]\n");
}
