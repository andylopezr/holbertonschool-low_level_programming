#include <stdio.h>
/**
 * main - Find and print the largest prime
 * factor of 612852475143
 * Return: 0
 */
int main(void)
{
	long int i = 2, n = 612852475143;

	while (i <= n)
	{
		if (n % i == 0)
		{
			n = n / i;
			i++;
		}
		else
			i++;
	}
	printf("%li\n", i - 1);
	return (0);
}
