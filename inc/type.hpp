#pragma none

#include <stdint.h>

struct CELL {
    enum T { INT,UINT,FLOAT} t;
    union V { int32_t n; uint32_t u; float f;} v;
};

// /// @brief available cell (value) types
// enum class T { NIL, INT, UINT, FLOAT };

// /// @brief cell shares memory for any supported @ref T
// union V {
//     int32_t n;   ///< signed integer
//     uint32_t u;  ///< unsigned integer
//     float f;     ///< 32-bit float
// };

// /// @brief tagged union holds both
// /// - @ref T type reference
// struct CELL {
//     T t;
//     V v;
// };
