#ifndef HOLBERTON_H
#define HOLBERTON_H

/* prints a character to stdo. */
int _putchar(char c);

/* checks for lowercase character. */
int _islower(int c);

/* checks for alphabetic character. */
int _isalpha(int c);

/* computes the absolute value of an integer. */
int _abs(int n);

/* checks for uppercase character. */
int _isupper(int c);

/* checks for a digit (0 through 9). */
int _isdigit(int c);

/* returns the length of a string. */
int _strlen(char *s);

/* prints a string, followed by a new line, to stdout. */
void _puts(char *s);

/* copies a string. */
char *_strcpy(char *dest, char *src);

/* convert a string to an integer. */
int _atoi(char *s);

/* appends two strings. */
char *_strcat(char *dest, char *src);

/* concatenates two strings. */
char *_strncat(char *dest, char *src, int n);

/* copies a string. */
char *_strncpy(char *dest, char *src, int n);

/* compares two strings. */
int _strcmp(char *s1, char *s2);

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

/* locates a substring. */
char *_strstr(char *haystack, char *needle);

#endif
