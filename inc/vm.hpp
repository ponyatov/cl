#pragma once

/// @defgroup vm vm
/// @brief Virtual Machine
/// @ingroup core
/// @{

/// @brief Virtual Machine
class VM {};

/// @defgroup cmd cmd
/// @brief @ref VM command
/// @ingroup vm
/// @{

/// @brief @ref VM command
class Cmd {};

/// `( -- )` do nothing
class Nop : public Cmd {};

/// @}
/// @}
