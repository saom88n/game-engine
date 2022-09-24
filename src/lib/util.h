#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>

// TODO: File logger ($time.log)

// Error log

#define ERROR_EXIT(...)         fprintf(stderr, __VA_ARGS__)
#define ERROR_RETURN(R, ...)    fprintf(stderr, __VA_ARGS__); return R

// Default log

#define LOG_PRINT(...)          fprintf(stderr, __VA_ARGS__);
#define LOG_RETURN(R, ...)      fprintf(stderr, __VA_ARGS__); return R

// Warning log

#define WARNING_PRINT(...)      fprintf(stderr, __VA_ARGS__)
#define WARNING_RETURN(R, ...)  fprintf(stderr, __VA_ARGS__); return R

#endif
