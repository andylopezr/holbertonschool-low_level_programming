#include "holberton.h"
int _special(char *s1, char *s2);
/**
 * _compares - goes to end of found substring
 *
 * @s1: non-wildcard string we're checking for matches
 * @s2: wildcarded string we're checking the substring from
 *
 * Return: continue wild mode at end of substring if
 * substring found, 0 otherwise
 */
int _compares(char *s1, char *s2)
{
	if (*s2 == '*')
		return (_special(s1, s2 + 1));
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s1 == *s2)
		return (_compares(s1 + 1, s2 + 1));
	return (0);
}

/**
 * _special - Processes wildcards from s2 and handles backtracking
 * to match multiple instances of wildcarded substrings
 *
 * @s1: string we're trying to match
 * @s2: wildcarded string containing search pattern
 *
 * Return: 1 if valid match, 0 if not
 */
int _special(char *s1, char *s2)
{
	if (*s2 == '*')
		return (_special(s1, s2 + 1));
	if (*s2 == 0)
		return (1);
	if (*s1 == 0)
		return (0);
	if (*s1 != *s2)
		return (_special(s1 + 1, s2));
	if (!(_compares(s1 + 1, s2 + 1)))
		return (_special(s1 + 1, s2));
	return (1);
}

/**
 * wildcmp - Compares two strings with * wildcards. Sets initial search mode.
 *
 * @s1: first string, without *
 * @s2: second string with *
 *
 * Return: 1 if identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		return (_special(s1, s2));
	return (_compares(s1, s2));
}
