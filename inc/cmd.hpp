#pragma once

/// @defgroup cmd cmd
/// @brief @ref VM command
/// @ingroup vm
/// @{

/// @brief @ref VM command
class Cmd {};

/// @brief @ref Cmd opcode
enum Op { nop = 0x00, halt = 0xFF };

/// `( -- )` do nothing
class Nop : public Cmd {
    static const Op op = Op::nop;
};
/// `( -- )` stop system
class Halt : public Cmd {
    static const Op op = Op::halt;
};

/// @}
