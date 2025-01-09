#pragma once

/// @defgroup core core

/// @defgroup libc libc
/// @brief POSIX libs
/// @ingroup core
/// @{
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
/// @}

#include "hw.hpp"
#include "cpu.hpp"
#include "arch.hpp"
#include "os.hpp"

/// @defgroup main main
/// @brief POSIX entry point
/// @ingroup core
/// @{
extern int main(int argc, char *argv[]);
extern void arg(int argc, char *argv);
/// @}

/// @defgroup cross cross

#include "syntax.hpp"
