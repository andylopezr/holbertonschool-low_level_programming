#include "holberton.h"

 /**
  * _strpbrk - function that searches in string for any of a set of bytes
  * @s: string to compare from.
  * @accept: string to compare with.
  *
  * Return: Pointer to the first match.
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, find = 0;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				find++;
				break;
			}
		}
		if (find == 1)
		{
			break;
		}
	}
	if (find == 1)
	{
		p = (s + i);
		return (p);
	}
	else
	{
		return ('\0');
	}
}
