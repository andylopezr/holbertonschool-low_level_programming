#include "variadic_functions.h"
/**
 *print_all - Function to print anything
 *@format: format to print case
 *
 *Return: print anything and separator
 */
void print_all(const char * const format, ...)
{
	int i, j;
	double k;
	char *s;

	va_list all;

	va_start(all, format);

	j = 0;
	while (format && format[j])
	{
		switch (format[j])
		{
		case 'c':
			printf("%c", va_arg(all, int));
			break;
		case 'i':
			i = va_arg(all, int);
			printf("%d", i);
			break;
		case 'f':
			f = va_arg(all, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(all, char*);
			if (!s)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			break;
		}
		if ((format[j] == 'c' || format[j] == 'i' || format[j] == 's' ||
		     format[j] == 'f') && (format[j + 1] != '\0'))
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(print_all);
}
