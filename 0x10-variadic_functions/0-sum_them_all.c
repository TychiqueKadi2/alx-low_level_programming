#include "variadic_functions.h"
/**
 * sum_them_all - adds all parameters passed
 * @n: number of arguements passed
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int a;

	va_list parameter;

	va_start(parameter, n);

	for (a = 0; a < n; a++)
	{
		if (n == 0)
			return (0);

		else
			sum += va_arg(parameter, const unsigned int);
	}
	va_end(parameter);
	return (sum);
}

