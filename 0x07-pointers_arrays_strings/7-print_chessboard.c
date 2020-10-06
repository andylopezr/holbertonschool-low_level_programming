#include "holberton.h"
/**
 *print_chessboard - prints the chessboard.
 *@a: 8x8 board 2D array.
 */
void print_chessboard(char (*a)[8])
{
	int i, j = 0;

	for(; i < 8; i++)
	{
		j = 0;
		for(; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

			_putchar('\n');
	}
}
