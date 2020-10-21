#include <stdio.h>
#include <stdlib.h>

/**
 * main - print hex opcodes of its own main function.
 *
 * @ac: number of arguments
 * @av: array of argument strings
 *
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	char *f = (char *)main;
	int n, i;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(av[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 1; i < n; i++)
		printf(" %02hhx", f[i]);
	printf("%02hhx\n", f[i]);
	return (0);
}
