#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char Ap = 'a';

	while (Ap <= 'z')
	{
		putchar(Ap);
		Ap++;
	}
	putchar('\n');
	return (0);
}
