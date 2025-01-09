#pragma once

#include "cl.hpp"

/// @defgroup vm vm
/// @brief Virtual Machine
/// @ingroup core
/// @{

/// @brief Virtual Machine
class VM {
    /// @name D: data stack
    /// @{
    ///< data stack size = @ref config::Dsz
    static const size_t Dsz = static_cast<size_t>(config::Dsz);
    CELL D[Dsz];    ///< data stack holds @ref CELL s
    size_t Dp = 0;  ///< @ref D pointer

    /// @}
    /// @name R: return stack
    /// @{
    /// return stack size = @ref config::Rsz
    static const size_t Rsz = static_cast<size_t>(config::Rsz);
    size_t R[Rsz];  ///< return stack
    size_t Rp = 0;  ///< @ref R pointer

    /// @}

   public:
    /// @name D: data stack
    /// @{
    void push(int n);    ///< `( -- n )` push signed integer
    void push(float f);  ///< `( -- f )` push floating point
    /// @}
    /// @name control
    /// @{
    void nop();   ///< `( -- )` do nothing
    void halt();  ///< `( -- )` stop @ref VM
    /// @}
    /// @name debug
    /// @{
    void dump();  ///< `( -- )` dump @ref VM state
    /// @}
};

/// single @ref VM
extern VM vm;

/// @}
