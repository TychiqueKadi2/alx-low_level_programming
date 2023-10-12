#include <stdio.h>
/**
 * main - finds largest prime factor of varible num
 * Return: Always 0 (success)
 */
int main(void)
{
	long num = 612852475143, dinomminator;

	while (dinomminator < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
			continue;
		}
		for (dinomminator = 3; dinomminator < (num / 2); dinomminator += 2)
		{
			if ((num % dinomminator) == 0)
				num /= dinomminator;
		}
	}
	printf("%ld\n", num);
	return (0);
}
