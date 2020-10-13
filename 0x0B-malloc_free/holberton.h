#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* writes the character c to stdout. */
int _putchar(char c);

/* creates an array of chars, and initializes it with a specific char. */
char *create_array(unsigned int size, char c);

/**
 *returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter. */
char *_strdup(char *str);

/* unction that concatenates two strings. */
char *str_concat(char *s1, char *s2);

/* returns a pointer to a 2 dimensional array of integers. */
int **alloc_grid(int width, int height);

/* frees a 2 dimensional grid previously created by your alloc_grid function. */
void free_grid(int **grid, int height);

/* concatenates all the arguments of your program. */
char *argstostr(int ac, char **av);


#endif
