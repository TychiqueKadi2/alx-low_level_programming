#include <stdio.h>
/**
 * main - prints alphabets without q and e
 * Return: Always 0 (success)
 */

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if ((a != 'q'  && a != 'e') && a <= 'z')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
