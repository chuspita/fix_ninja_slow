//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// WARNING: This test was generated by generate_feature_test_macro_components.py
// and should not be edited manually.
//
// clang-format off

// <limits>

// Test the feature test macros defined by <limits>

/*  Constant             Value
    __cpp_lib_char8_t    201907L [C++20]
*/

#include <limits>
#include "test_macros.h"

#if TEST_STD_VER < 14

# ifdef __cpp_lib_char8_t
#   error "__cpp_lib_char8_t should not be defined before c++20"
# endif

#elif TEST_STD_VER == 14

# ifdef __cpp_lib_char8_t
#   error "__cpp_lib_char8_t should not be defined before c++20"
# endif

#elif TEST_STD_VER == 17

# ifdef __cpp_lib_char8_t
#   error "__cpp_lib_char8_t should not be defined before c++20"
# endif

#elif TEST_STD_VER == 20

# if defined(__cpp_char8_t)
#   ifndef __cpp_lib_char8_t
#     error "__cpp_lib_char8_t should be defined in c++20"
#   endif
#   if __cpp_lib_char8_t != 201907L
#     error "__cpp_lib_char8_t should have the value 201907L in c++20"
#   endif
# else
#   ifdef __cpp_lib_char8_t
#     error "__cpp_lib_char8_t should not be defined when the requirement 'defined(__cpp_char8_t)' is not met!"
#   endif
# endif

#elif TEST_STD_VER > 20

# if defined(__cpp_char8_t)
#   ifndef __cpp_lib_char8_t
#     error "__cpp_lib_char8_t should be defined in c++2b"
#   endif
#   if __cpp_lib_char8_t != 201907L
#     error "__cpp_lib_char8_t should have the value 201907L in c++2b"
#   endif
# else
#   ifdef __cpp_lib_char8_t
#     error "__cpp_lib_char8_t should not be defined when the requirement 'defined(__cpp_char8_t)' is not met!"
#   endif
# endif

#endif // TEST_STD_VER > 20
