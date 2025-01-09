#include "cl.hpp"

VM vm;

void VM::push(int n) {
    assert(Dp < Dsz);
    D[Dp++] = n;
}

void VM::fpush(float f) {
    assert(Fp < Fsz);
    F[Fp++] = f;
}

void VM::dump() {
    /// @ref VM.D
    fprintf(stderr, "\nD:[ ");
    for (int i = 0; i < Dp; i++) fprintf(stderr, "%i ", D[i]);
    fprintf(stderr, "]\n");
    /// @ref VM.F
    fprintf(stderr, "F:[ ");
    for (int i = 0; i < Fp; i++) fprintf(stderr, "%f ", F[i]);
    fprintf(stderr, "]\n");
    //
    fprintf(stderr, "---------------------------\n");
}
