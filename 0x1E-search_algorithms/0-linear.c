#include "search_algos.h"

/**
 * linear_search - Looks for a value in an array of int using Linear search
 * @array: int array
 * @size: array size
 * @value: value to search for
 *
 * Return: Index where value is locate, -1 otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
