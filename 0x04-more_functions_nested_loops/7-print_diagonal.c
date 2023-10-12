#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times line is printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, p;

		for (m = 0; m < n; m++)
		{
			for (p = 0; p < n; p++)
			{
				if (p == m)
					_putchar('\\');
				else if (p < m)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
