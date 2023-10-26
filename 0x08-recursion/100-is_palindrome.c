#include "main.h"
/**
 * _strlen_recursion - measures string lenth
 * @s: string to measure
 * Return: string lengh
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if string is palidrome
 * @s: string to check
 * Return: 1 if palidrome , else return 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_strlen_recursion(s) -1);
}
