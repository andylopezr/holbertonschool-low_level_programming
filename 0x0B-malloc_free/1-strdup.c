#include "holberton.h"
/**
 * _strdup - return a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: input string
 * Return: Pointer to the new str, NULL if memory unavailable.
 */
char *_strdup(char *str)
{
	int counter, b = 1;
	char *dup;

	while (*(str + b))
		b++;
	dup = malloc(b * sizeof(char) + 1);
	for (counter = 0; counter <= b; counter++)
		*(dup + counter) = *(str + counter);
	if (str == NULL || dup == NULL)
	return (NULL);
	return (dup);
}
