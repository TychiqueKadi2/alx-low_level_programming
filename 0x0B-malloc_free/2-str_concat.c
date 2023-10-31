#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: string to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t a , b, k, l;
	char *ptr;

	if (s1 == '\0')
	{
		s1 = "";
	}

	if (s2 == '\0')
	{
		s2 = "";
	}
	
	a = 0;
	while (s1[a] != '\0')
	{
		a++
	}

	b = 0;
	while (s2[b] != '\0')
	{
		b++;
	}

	ptr = malloc(sizeof(char) * (a + b + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < a; k++)
	{
		ptr[k] = s[k];
	}

	for (l = 0; l < b; l++)
	{
		ptr[k] = s2[l];
		k++;
	}
	return (ptr);
}
