#include "main.h"
/**
 * _strlen_recursion - measures length of string
 * @s: string to measure
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
