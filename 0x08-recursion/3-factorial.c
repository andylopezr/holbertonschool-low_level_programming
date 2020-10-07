#include "holberton.h"
/**
 *int factorial - returns the factorial of a given number.
 *@n: number to analyze.
 *Return: If lower than 0 return -1 indicating error.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial (n - 1));
	}
	else
	{
		return (1);
	}
}
