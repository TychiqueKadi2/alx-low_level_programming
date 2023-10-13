#include "main.h"
/**
 * more_numbers - prints numbers 10 times
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int a, b;

	while (a <= 9)
	{
		b = 0;

		while (b <= 14)
		{
			if (b > 9)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
			b++;
		}

		_putchar('\n');
		a++;
	}
}
