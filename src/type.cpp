#include "cl.hpp"

void CELL::dump() {
    switch (t) {
        case T::INT:
            fprintf(stderr, "int:%d ", v.n);
            break;
        case T::FLOAT:
            fprintf(stderr, "float:%f ", v.f);
            break;
        default:
            fprintf(stderr, "?%i:%i ", t, v);
    }
}
