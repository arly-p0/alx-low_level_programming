#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - function that peints the chessboard
 * @a: character to be printed
 */
void print_chessboard(char (*a)[8])
{
	int j;
	int b;

	for (j = 0; j < 8; j++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[j][b]);
		_putchar('\b');
	}
}
