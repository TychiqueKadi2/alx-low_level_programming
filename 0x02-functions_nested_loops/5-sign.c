#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: the interger to be checked
 * Return: 1 , print + if n is positive
 * 0 , print 0 if n is zero
 * -1 , print - if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
