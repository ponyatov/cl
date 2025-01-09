#include "cl.hpp"

VM vm;

void VM::push(int32_t n) {
    assert(Dp < Dsz);
    D[Dp++] = CELL{T::INT, {n : n}};
}

void VM::push(uint32_t u) {
    assert(Dp < Dsz);
    D[Dp++] = CELL{T::UINT, {u : u}};
}

void VM::fpush(float f) {
    // assert(Fp < Fsz); F[Fp++] = f;
    assert(Dp < Dsz);
    D[Dp++] = CELL{T::FLOAT, {f : f}};
}

void VM::dump() {
    /// @ref VM.D
    fprintf(stderr, "\nD:[ ");
    for (int i = 0; i < Dp; i++) fprintf(stderr, "%i ", D[i]);
    fprintf(stderr, "]\n");
    // /// @ref VM.F
    // fprintf(stderr, "F:[ ");
    // for (int i = 0; i < Fp; i++) fprintf(stderr, "%f ", F[i]);
    // fprintf(stderr, "]\n");
    //
    fprintf(stderr, "---------------------------\n");
}
