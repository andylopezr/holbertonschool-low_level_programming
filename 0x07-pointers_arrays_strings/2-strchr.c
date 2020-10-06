#include "holberton.h"
/**
 * _strchr - funtion thar copies memory area.
 * @s: string destin
 * @c: string src
 * Return: Position to first occurrence, Null otherwise.
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s == '\0')
		{
			return ('\0');
		}
	}
}
