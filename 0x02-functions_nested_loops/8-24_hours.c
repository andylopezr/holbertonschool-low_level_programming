#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 **/
void jack_bauer(void)
{
	int num0;
	int num1;
	int num2;
	int num3;

	for (num0 = 0; num0 <= 2; num0++)
	{
		for (num1 = 0; num1 <= 9; num1++)
		{
			if (num0 == 2 && num1 == 4)
				break;
			for (num2 = 0; num2 <= 5; num3++)
			{
				for (num3 = 0; num3 <= 9; num3++)
				{
					_putchar(num0 + '0');
					_putchar(num1 + '0');
					_putchar(':');
					_putchar(num2 + '0');
					_putchar(num3 + '0');
					_putchar('\n');

				}

			}

		}

	}

}
