#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @a: a pointer to string
 * Return: a
 */
char *string_toupper(char *a)
{
	int b;

	b = 0;
	while (a[b] != '\0')
	{
		if (a[b] >= 'a' && a[b] <= 'z')
		{
			a[b] = a[b] - 32;
		}
		b++;
	}
	return (a);
}
