#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>
#define ERROR_EXIT(...)         fprintf(stderr, "\033[31mERROR: %s\033[0m\n", __VA_ARGS__)
#define ERROR_RETURN(R, ...)    fprintf(stderr, "\033[31mERROR: %s\033[0m\n", __VA_ARGS__); return R

#define LOG_PRINT(...)          fprintf(stderr, "INFO: %s\n", __VA_ARGS__);
#define LOG_RETURN(R, ...)      fprintf(stderr, "INFO: %s\n", __VA_ARGS__); return R

#define WARNING_PRINT(...)      fprintf(stderr, "\033[33mWARNING: %s\033[0m\n", __VA_ARGS__)
#define WARNING_RETURN(R, ...)  fprintf(stderr, "\033[33mWARNING: %s\033[0m\n", __VA_ARGS__); return R

#endif
