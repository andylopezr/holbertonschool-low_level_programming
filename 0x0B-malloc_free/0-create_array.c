#include "holberton.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array.
 * @c: char to initialize.
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a = 0;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
	{
		return ('\0');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			array[a] = c;
		}
		return (array);
	}
	return (NULL);
}
