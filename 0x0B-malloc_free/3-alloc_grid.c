#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array 
 * @width: of array
 * @height: of array
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(width * sizeof(int));
		if (ptr[a] == NULL)
		{
			for (a--; a >= 0; a--)
			{
				free(ptr);
			}

			free(ptr[a]);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			ptr[a][b] = 0;
	return (ptr);
}

