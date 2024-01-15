#include "main.h"
/**
 * _messet - fills memory with a constant byte
 * @s: starting memory address
 * @b: output
 * @n: bytes to change
 * Return: new array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int z = 0;

	for (; n > 0; z++)
	{
		s[z] = b;
		n--;
	}
	return (s);
}
