#include "holberton.h"
/**
 *string_nconcat - concatenates two strings.
 *@s1: first string.
 *@s2: second string.
 *@n: bytes of s2.
 *Return: pointer on success NULL otherwise.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		p = malloc(sizeof(char) * (i + j + 1));
	else
		p = malloc(sizeof(char) * (i + n + 1));
	if (!p)
		return (NULL);
	while (s1[k])
	{
		p[k] = s1[k];
		k++;
	}
	if (n >= j)
	{
		while (l <= j)
		{
			p[i + l] = s2[l];
			l++;
		}
	}
	else
	{
		while (l < n)
		{
			p[i + l] = s2[l];
			l++;
		}
		p[i + l] = 0;
	}
	return (p);
}
