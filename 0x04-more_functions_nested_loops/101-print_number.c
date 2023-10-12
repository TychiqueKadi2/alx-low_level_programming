#include "main.h"
/**
 * print_number - prints an interger
 * @n: interger to be printed
 */
void print_number(int n)
{
	unsigned int interger = n;

	if (n < 0)
	{
		_putchar('-');
		interger = -interger;
	}
	if ((interger / 10) > 0)
		print_number(interger / 10);
	_putchar((interger % 10) + 48);
}
