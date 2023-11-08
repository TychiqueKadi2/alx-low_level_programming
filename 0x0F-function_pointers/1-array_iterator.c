#include "function_pointers.h"
/**
 * array_iterator - executes function given as paramaters
 * @array: array
 * @size: array size
 * @action: pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(*array);
		array++;
	}
}
