#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an character array
 * @size: the array size
 * @c: stores strings of characters
 * Return: pointer to character c
 */
char *create_array(unsigned int size, char c)
{
	size_t a;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		ptr[a] = c;
	}
	return (ptr);
}
