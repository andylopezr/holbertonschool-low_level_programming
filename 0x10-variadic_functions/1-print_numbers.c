#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(list, int);
		printf("%i", j);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
