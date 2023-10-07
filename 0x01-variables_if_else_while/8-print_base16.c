#include <stdio.h>
/**
 * main - prints numbers between 0 to 9 and letters between a to f
 * Return: Always 0 (success)
 */

int main(void)
{
	char a;

	int b;

	a = 'a';
	b = 0;
	while (b < 10)
	{
		putchar(b + '0');
		b++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
