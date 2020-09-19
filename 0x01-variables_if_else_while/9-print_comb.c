#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (success)
 */
int main(void)
{
	int pat;

	for (pat = '0' ; pat <= '9' ; pat++)
	{
		putchar (pat);
		if (pat < '9')
		{
			putchar (',');
			putchar (' ');

		}

	}
	putchar ('\n');
	return (0);

}
