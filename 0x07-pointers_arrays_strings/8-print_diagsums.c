#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a: string
 * @size: disgonals
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int x;
	int sum = 0;

	for (x = 0; x <= (size * size); x = x + size + 1)
		sum = sum + a[x];
	printf("%d\n", sum);
}
