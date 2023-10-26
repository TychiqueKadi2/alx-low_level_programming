#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find natural sqare root
 * Return: naturl sqaure root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion(n, 1));
	
	int i;
	int sr = i * i;

	if (sr > n)
		return (-1);
	if (sr == n)
	{
		return (i);
	}
	return (_sqrt_recursion(n, i + 1));
}
