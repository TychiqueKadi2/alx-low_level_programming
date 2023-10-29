#include <stdio.h>
#include "main.h"
/**
 * _strstr -  locates a substring.
 * @haystack: string to locate
 * @needle: string
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *ptr = needle;

		while (*s == *ptr && *ptr != '\0')
		{
			s++;
			ptr++;
		}
		if (*ptr == '\0')
			return (haystack);
	}
	return (NULL);
}
