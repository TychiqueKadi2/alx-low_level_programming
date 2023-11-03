#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates arrays of intergers
 * @min: lowest int
 * @max: highest int
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int a, b;
	int *ptr;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < b; a++)
	{
		ptr[a] = min;
		min++;
	}
	return (ptr);
}
