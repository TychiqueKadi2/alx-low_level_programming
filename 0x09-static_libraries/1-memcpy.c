#include "main.h"
/**
 * _memcpy - a function that copies memory
 * @dest: memeory to copy from
 * @src: memory to copy to
 * @n: number of bytes
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
