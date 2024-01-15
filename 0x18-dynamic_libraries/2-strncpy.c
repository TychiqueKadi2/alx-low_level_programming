#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: string to be copied
 * @src: string to copy to
 * @n: length of string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[n] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
