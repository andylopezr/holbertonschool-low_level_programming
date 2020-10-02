#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: a string
 **/
char *cap_string(char *str)
{
	int x = 0, y;
	char symbol[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (str[x] != '\0')
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			for (; y <= 12; y++)
			{
				if (str[x - 1] == symbol[y])
				{
					str[x] = str[x] - 32;
				}
			}
		}
		x++;
	}
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	return (str);
}
