#include <stdio.h>
/**
 * main - all natural numbers below 1024 and multiple or 3 excluded
 * Return: Always ) (success)
 */
int main(void)
{
	int a, sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			sum += a;
	}

	printf("%d\n", sum);

	return (0);
}
