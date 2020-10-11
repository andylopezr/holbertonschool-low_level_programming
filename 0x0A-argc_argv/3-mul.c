#include "holberton.h"
/**
 * main - multiplies two numbers.
 *@argc: number of arguments.
 *@argv: Numbers to multiply.
 *Return: If no arguments prints Error and Returns 1. 
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", ((atoi(argv[1])) * (atoi(argv[2]))));
		return (0);
	}
	printf("Error\n");
	return (1);
}
