#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random passwords
 * Return: Always 0
 */
int main(void)
{
	int code;
	char a;

	srand(time(NULL));
	code = 0;
	while (code <= 2645)
	{
		a = rand() % 128;
		code += a;
		putchar(a);
	}
	putchar(2772 - code);
	putchar('\n');

	return (0);
}
