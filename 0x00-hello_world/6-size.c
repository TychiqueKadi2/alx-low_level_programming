#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size a of char: %zu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size a of int: %zu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size a of long int: %zu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size a of long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size a of float: %zu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
