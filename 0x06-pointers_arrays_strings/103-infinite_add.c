#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int a = 0;
	int b = 0;
	char c;

	while (*(n + a) != '\0')
	{
		a++;
	}
	a--;

	for (b = 0; b < a; b++, a--)
	{
		c = *(n + b);
		*(n + b) = *(n + a);
		*(n + a) = c;
	}
}
