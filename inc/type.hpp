#pragma none

#include <cl.hpp>

/// @defgroup type type
/// @brief @ref CELL data types
/// @ingroup vm
/// @{

/// @brief type/class tag
enum class T : uint8_t {
    NIL,    ///< `nil`
    INT,    ///< `int` signed integer
    FLOAT,  ///< `f32` 32-bit float
    BOOL,   ///< `bool` boolean
    PTR,    ///< `ptr` raw pointer
};

static_assert(sizeof(T) == sizeof(uint8_t), "T::size");

/// @brief scalar types & pointers (can fit in machine `size_t`)
union V {
    void *p;  ///< @ref nullptr
    int n;    ///< @ref T::INT
    float f;  ///< @ref T::FLOAT
    bool b;   ///< @ref T::BOOL
};

static_assert(sizeof(V) == sizeof(size_t), "V::size");

/// @brief universal data item can be stored in @ref VM.D data stack
struct CELL {
    T t;  ///< @ref T type/class tag
    V v;  ///< @ref V type-specific low-level value

    void dump();  ///< @ref T : @ref V print
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

/// @}
