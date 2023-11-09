#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed etc c, i, f, s
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int a, yes;
	char *r;
	va_list ptr;

	va_start(ptr, format);

	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case 's':
				r = va_arg(ptr, char*);
				if (r == NULL)
					r = "(nil)";
				printf("%s", r);
				break;

			case 'i':
				printf("%d", va_arg(ptr, int));
				yes = 0;
				break;

			case 'f':
				printf("%f", va_arg(ptr, double));
				yes = 0;
				break;

			case 'c':
				printf("%c", va_arg(ptr, int));
				yes = 0;
				break;


			default:
				yes = 1;
				break;
		}
		if (format[a + 1] != '\0' && yes == 0)
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(ptr);
}
