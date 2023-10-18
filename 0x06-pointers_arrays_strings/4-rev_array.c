#include "main.h"
/**
 * reverse_array - reverses content of array
 * @a: array to reverse
 * @n: number of elements
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; 1 < n--; i++)
	{
		b = a[i];
		a[i] =  a[n];
		a[n] = b;
	}
}
