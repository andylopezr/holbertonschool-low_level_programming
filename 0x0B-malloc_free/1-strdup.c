#include "holberton.h"
/**
 * _strdup - return a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: input string
 *
 * Return: NULL if str = NULL otherwise pointer to the new str
 */

char *_strdup(char *str)
{
	int counter, b = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (*(str + b))
		b++;

	dup = malloc(b * sizeof(char) + 1);
	if (dup == NULL)
		return (NULL);
	for (counter = 0; counter <= b; counter++)
		*(dup + counter) = *(str + counter);
	return (dup);
}
