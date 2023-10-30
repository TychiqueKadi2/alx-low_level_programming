#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints amount of coins that make up change for an amount
 * @argc: number of arguments
 * @argv: array containing arguements
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int change, coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);

	while (change > 0)
	{
		if (change >= 25)
			change -= 25;

		if (change >= 10)
			change -= 10;

		if (change >= 5)
			change -= 5;

		if (change >= 2)
			change -= 2;

		if (change >= 1)
			change -= 1;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
