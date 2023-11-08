#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: of person
 * @f: string name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
