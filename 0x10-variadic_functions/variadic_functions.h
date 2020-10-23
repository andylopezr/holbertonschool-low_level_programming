#ifndef VARIADIC_H_
#define VARIADIC_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/* returns the sum of all its parameters */
int sum_them_all(const unsigned int n, ...);

/* prints numbers, followed by a new line */
void print_numbers(const char *separator, const unsigned int n, ...);

/* prints strings, followed by a new line */
void print_strings(const char *separator, const unsigned int n, ...);

/* prints anything. */
void print_all(const char * const format, ...);

#endif
