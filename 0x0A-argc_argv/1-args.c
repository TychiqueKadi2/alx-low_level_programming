#include <stdio.h>
/**
 * main - prints number of arguments in it
 * @argc: number of arguments
 * @argv: array containing arguments
 * Return: Always 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
