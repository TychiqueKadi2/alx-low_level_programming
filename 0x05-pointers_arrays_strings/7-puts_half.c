#include "main.h"
/**
 * puts_half - prints second half of string
 * @str: string printing from
 * Return: Always 0
 */
void puts_half(char *str)
{
	int a = 0;
	int half, b;

	while (str[a] != '\0')
	{
		a++;
	}
	half = (a - 1) / 2;
	for (b = (half + 1); b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
