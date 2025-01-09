#include "cl.hpp"

VM vm;

void VM::push(int n) {
    assert(Dp < Dsz);
    D[Dp++] = CELL{T::INT, {n : n}};
}

void VM::push(float f) {
    assert(Dp < Dsz);
    D[Dp++] = CELL{T::FLOAT, {f : f}};
}

void VM::dump() {
    /// @ref VM.D
    fprintf(stderr, "\n[ ");
    for (int i = 0; i < Dp; i++) D[i].dump();
    fprintf(stderr, "]\n");
}
