#include <stdio.h>
/**
 * main - prints alphabet
 * Return: Always 0 (success)
 */

int main(void)
{
	char a, b;

	a = 'a';
	b = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
