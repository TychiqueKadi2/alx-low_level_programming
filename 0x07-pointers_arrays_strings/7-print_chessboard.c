#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: array
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int z, b;

	for (z = 0; z < 8; z++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[z][b]);
		_putchar('\n');
	}
}
