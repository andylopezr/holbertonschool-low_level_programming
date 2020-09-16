#include <stdio.h>
/**
 * main - Entry point, prints all sizeof
 *
 * Return: Always 0
 */

int main(void)
{

	char ba;
	int bb;
	long bc;
	double bd;
	float be;

	printf("Size of a char: %d byte(s)\n", sizeof(ba));
	printf("Size of an int: %d byte(s)\n", sizeof(bb));
	printf("Size of a long int: %d byte(s)\n", sizeof(bc));
	printf("Size of a long long int: %d byte(s)\n", sizeof(bd));
	printf("Size of a float: %d byte(s)\n", sizeof(be));
	return (0);
}
