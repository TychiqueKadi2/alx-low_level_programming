#include <stdio.h>
/**
 * main - prints numbers from 0 to 9
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		putchar(a + '0');
		a++;

	}
	putchar('\n');
	return (0);
}
