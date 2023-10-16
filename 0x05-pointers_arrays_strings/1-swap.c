#include "main.h"
/**
 * swap_int - swaps values of intergers
 * @a: interger to be swapped
 * @b: interger to be swapped
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
