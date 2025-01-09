#pragma once

#include "cmd.hpp"

/// @defgroup vm vm
/// @brief Virtual Machine
/// @ingroup core
/// @{

/// @brief Virtual Machine
class VM {
    static const int Dsz = 0x10;  ///< data stack size
    int D[Dsz];                   ///< data stack
    int Dp = 0;                   ///< @ref D pointer
   public:
    void push(int n);  ///< `( -- n )` push integer
    void dump();       ///< `( -- )` dump @ref VM state
    void nop();        ///< `( -- )` do nothing
    void halt();       ///< `( -- )` stop @ref VM
};

/// single @ref VM
extern VM vm;

/// @}
