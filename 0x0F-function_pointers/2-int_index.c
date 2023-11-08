#include "function_pointers.h"
/**
 * int_index - searches for interger
 * @array: array
 * @size: number of elements in array
 * @cmp: function pointer
 * Return: index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
		return (a);
	}
	return (-1);
}
