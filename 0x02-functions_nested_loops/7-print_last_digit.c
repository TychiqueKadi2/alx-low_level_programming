#include "main.h"
/**
 * print_last_digit - prints last digit of number
 * @n: interger to be checked for last digit
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l = -l;
	}
	_putchar(l + '0');
	return (l);
}

