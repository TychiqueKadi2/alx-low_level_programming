#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse
 * Return: Always 0 (success)
 */

int main(void)
{
	char a;

	a = 'z';
	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
