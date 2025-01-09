#pragma once

/// @defgroup config config
/// @ingroup core
/// @{

enum class config {
    Dsz = 0x10,  ///< @brief @ref VM.Dsz data stack size
    Fsz = 0x10,  ///< @brief @ref VM.Fsz FPU stack size
    Rsz = 0x100  ///< @brief @ref VM.Rsz return stack size
};

/// @}
