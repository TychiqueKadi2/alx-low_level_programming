#include "variadic_functions.h"
/**
 * print_strings - prints a string
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *str;

	va_list p_str;

	va_start(p_str, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(p_str, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (a != (n -1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p_str);
}
