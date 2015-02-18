
#pragma once

#include <cassert>
#include <string>

#ifndef NDEBUG
#   define assert2(condition, message) \
    do { \
        if (! (condition)) { \
            std::cerr << "Assertion `" #condition "` failed in " << __FILE__ \
                      << " line " << __LINE__ << ": " << message << std::endl; \
            std::exit(EXIT_FAILURE); \
        } \
    } while (false)
#else
#   define assert2(condition, message) do { } while (false)
#endif

/* #if __GNUC__ 
#define assert2(expr, str) \
  ((expr)                  \
   ? (void)(0)\
   : __assert_fail ((std::string(__STRING(expr)) + "; " + (str)).c_str(), __FILE__, __LINE__))
#elif __clang__
#define assert2(expr, str) \
  ((expr)                  \
   ? (void)(0)\
   : __assert_rtn ((std::string(__STRING(expr)) + "; " + (str)).c_str(), __FILE__, __LINE__, __func__))
#else 
#define assert2(expr, str) assert(expr)
#endif */
