#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* writes the character c to stdout. */
int _putchar(char c);

/* appends two strings. */
char *_strcat(char *dest, char *src);

/* concatenates two strings. */
char *_strncat(char *dest, char *src, int n);

/* copies a string. */
char *_strncpy(char *dest, char *src, int n);

/* compares two strings. */
int _strcmp(char *s1, char *s2);

/*  reverses the content of an array of integers. */
void reverse_array(int *a, int n);

/* changes all lowercase letters of a string to uppercase. */
char *string_toupper(char *);



#endif
