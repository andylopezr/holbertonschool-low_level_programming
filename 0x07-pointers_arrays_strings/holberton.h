#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* fills memory with a constant byte. */
char *_memset(char *s, char b, unsigned int n);

/* copies memory area. */
char *_memcpy(char *dest, char *src, unsigned int n);

/* locates a character in a string. */
char *_strchr(char *s, char c);

/* gets the length of a prefix substring. */
unsigned int _strspn(char *s, char *accept);

/* searches a string for any of a set of bytes. */
char *_strpbrk(char *s, char *accept);

/* sets the value of a pointer to a char. */
void set_string(char **s, char *to);

/* prints the chessboard. */
void print_chessboard(char (*a)[8]);

/* prints the sum of the two diagonals of a square matrix of integers. */
void print_diagsums(int *a, int size);

int _putchar(char c);
#endif
