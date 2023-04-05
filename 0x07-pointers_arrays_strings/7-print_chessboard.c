#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - function that peints the chessboard
 * @a: character to be printed
 */
void print_chessboard(char (*a)[8])
{
	int j;
	int n;

	for (j = 0; j < 8; j++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[j][n]);
		_putchar('\n');
	}
}
