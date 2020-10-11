#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_

/* writes the character c to stdout. */
int _putchar(char c);

/*  takes a pointer to an int as parameter and updates the value it points to to 98. */
void reset_to_98(int *n);

/* swaps the values of two integers. */
void swap_int(int *a, int *b);

/* returns the length of a string. */
int _strlen(char *s);

/* prints a string, followed by a new line, to stdout. */
void _puts(char *str);

/* prints a string, in reverse, followed by a new line. */
void print_rev(char *s);

/* function that reverses a string. */
void rev_string(char *s);

/* prints every other character of a string, starting with the first character, followed by a new line. */
void puts2(char *str);

/* prints half of a string, followed by a new line. */
void puts_half(char *str);

/* convert a string to an integer. */
int _atoi(char *s);
#endif
