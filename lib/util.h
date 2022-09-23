#pragma once

#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>
/*
 *      LOGGER
 *      Usage: LOG_PRINT("Log message!");
 */
#define ERROR_EXIT(...)         fprintf(stderr, "\033[31m%s\033[0m", __VA_ARGS__)
#define ERROR_RETURN(R, ...)    fprintf(stderr, "\033[31m%s\033[0m", __VA_ARGS__); return R

#define LOG_PRINT(...)          fprintf(stderr, __VA_ARGS__);
#define LOG_RETURN(R, ...)      fprintf(stderr, __VA_ARGS__); return R

#define WARNING_PRINT(...)      fprintf(stderr, "\033[33m%s\033[0m", __VA_ARGS__)
#define WARNING_RETURN(R, ...)  fprintf(stderr, "\033[33m%s\033[0m", __VA_ARGS__); return R

#endif
