#include <stdio.h>

/**
 * main - natural numbers multiples of 3 or 5 to 1024
 *
 * Return: always 0
 */

int main(void)
{
	int i, j, f, tm, fm;

	i = 0;
	for (j = 0; j <= (1024 / 3); j++)
	{
		tm = 3 * j;
		i = i + tm;
	}
	for (f = 0; f <= (1024 / 5); f++)
	{
		if (!(f % 3 == 0))
		{
			fm = 5 * f;
			i = i + fm;
		}
	}
	printf("%i\n", i);
	return (0);
}
