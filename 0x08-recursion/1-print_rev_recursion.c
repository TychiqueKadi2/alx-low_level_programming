#include "main.h"
/*
 * 1_print_rev_recursion - prints string in reverse
 * _print_rev_recursion: reverses string
 * @s: string to reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
