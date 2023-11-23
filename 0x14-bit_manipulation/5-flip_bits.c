#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, bitt = 0;
	unsigned long int old;
	unsigned long int xor = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		old = xor >> a;
		if (old & 1)
			bitt++;
	}

	return (bitt);
}
