#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 0;
	while (a <= 99)
	{
		int b = a + 1;
		while (b <= 99)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
