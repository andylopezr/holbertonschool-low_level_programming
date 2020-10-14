#include "holberton.h"
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new string, NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *sout;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 != NULL)
		for (l1 = 0; *(s1 + l1); l1++)
			;
	if (s2 != NULL)
		for (l2 = 0; *(s2 + l2); l2++)
			;
	sout = malloc((sizeof(char) * (l1 + l2)) + 1);
	if (sout == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		*(sout + i) = *(s1 + i);
	for (j = 0; j < l2; j++, i++)
		*(sout + i) = *(s2 + j);
	return (sout);
}
