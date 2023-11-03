#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates menory for array using malloc
 * @nmemb: number of memory blocks
 * @size: size of elemnt
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
		if (ptr == NULL)
			return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		ptr[a] = 0;
	return (ptr);
}
