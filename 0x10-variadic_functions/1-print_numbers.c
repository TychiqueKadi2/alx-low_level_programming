#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @n: number of intergers passed
 * @separator: string to be printed between numbers
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a, num;

	va_list p;
	va_start(p, n);

	for (a = 0; a < n; a++)
	{
		num = va_arg(p, const unsigned int);
		printf("%d", num);

		if (separator != NULL && a != (n - 1))
			printf("%s", separator);

	}
	printf("\n");
	va_end(p);
}
