#include "holberton.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: input string.
 * Return: Pointer to the new str, NULL if memory unavailable.
 */
char *_strdup(char *str)
{
	int counter, b;
	char *dup;

	if (str == NULL)
	return (NULL);

	for (b = 0; *(str + b); b++)
	dup = malloc(b * sizeof(char) + 1);
	for (counter = 0; counter <= b; counter++)
		*(dup + counter) = *(str + counter);

	return (dup);
}
