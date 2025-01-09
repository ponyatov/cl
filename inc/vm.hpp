#pragma once

#include "cl.hpp"

/// @defgroup vm vm
/// @brief Virtual Machine
/// @ingroup core
/// @{

/// @brief Virtual Machine
class VM {
    // /// @name F: FPU
    // /// @{
    // static const int Fsz =
    //     static_cast<size_t>(config::Fsz);  ///< FPU stack size
    // float F[Fsz];                          ///< FPU stack
    // size_t Fp = 0;                         ///< @ref F pointer
    // /// @}

    /// @name D: data stack
    /// @{
    static const int Dsz =
        static_cast<size_t>(config::Dsz);  ///< data stack size
    CELL D[Dsz];                           ///< data stack holds @ref CELL s
    size_t Dp = 0;                         ///< @ref D pointer

    /// @}
    /// @name R: return stack
    /// @{
    static const int Rsz =
        static_cast<size_t>(config::Rsz);  ///< return stack size
    uint32_t R[Rsz];                       ///< return stack
    uint16_t Rp = 0;                       ///< @ref R pointer

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
