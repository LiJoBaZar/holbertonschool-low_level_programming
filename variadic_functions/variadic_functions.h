#ifndef VARIADIC_F_H
#define VARIADIC_F_H
#include <stdio.h>
#include <stdarg.h>
#include <stdarg.h>
#include <string.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
