#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: amount of parameters.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *s;

	if (separator)
	{
		va_start(valist, n);
		for (i = 0; i < n; i++)
		{
			s =va_arg(valist, char *);
			printf("%s", va_arg(valist, char *));
			if (i == n - 1)
			{
				printf("\n");
				break;
			}
			printf("%s", separator);
		}
		va_end(num_list);
	}
}
