#include <stdio.h>
/**
 * main - prints all arguments it gets
 * @argc: number of arguments
 * @argv: array containing arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
