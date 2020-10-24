#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (separator)
	{
		va_start(valist, n);
		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(valist, int), separator);
		printf("%d", va_arg(valist, int));
		va_end(valist);
	}
	printf("\n");
}
