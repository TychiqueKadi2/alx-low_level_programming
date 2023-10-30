#include <stdio.h>
/**
 * main - prints file name followed by new line
 * @argc: number of command line arguements
 * @argv: array that contains these arguements
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
