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
    static const size_t Dsz =
        static_cast<size_t>(config::Dsz);  ///< data stack size
    CELL D[Dsz];                           ///< data stack holds @ref CELL s
    size_t Dp = 0;                         ///< @ref D pointer

    /// @}
    /// @name R: return stack
    /// @{
    static const size_t Rsz =
        static_cast<size_t>(config::Rsz);  ///< return stack size
    size_t R[Rsz];                         ///< return stack
    size_t Rp = 0;                         ///< @ref R pointer

    /// @}

   public:
    /// @name D: data stack
    /// @{
    void push(uint32_t u);  ///< `D:( -- n )` push unsigned 32-bit integer
    void push(int32_t n);   ///< `D:( -- n )` push signed 32-bit integer
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
    /// @name F: FPU
    /// @{
    void fpush(float f);  ///< `F:( -- f )` push floating point
    /// @}
};

/// single @ref VM
extern VM vm;

/// @}
