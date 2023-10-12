#include "main.h"
/**
 * print_square - draws a square
 * @size: is size of square
 */
void print_square(int size)
{
	int a, b;

	if (size < 1)
	{
		_putchar('\n');
	}
	for (b = 0; b < size; b++)
	{
		for (a = 0; a < size; a++)
		{
			_putchar('#');
		}
		{
			_putchar('\n');
		}
	}
}
