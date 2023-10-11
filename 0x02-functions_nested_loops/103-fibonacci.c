#include <stdio.h>
/**
 * main - prints sum of value of terms
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	unsigned long int b, c, next, sum;

	b = 1;
	c = 2;
	sum = 0;

	for ( a = 1; a <= 33; a++)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		next = a + b;
		a = b;
		b = next;
	}

	printf("%lu\n", sum);

	return (0);
}
