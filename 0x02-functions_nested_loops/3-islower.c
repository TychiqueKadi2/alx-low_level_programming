#include "main.h"
/**
 * islower - check is alphabet is lowercase
 * @c: aphabet to be checked
 * Return: 1 (lowercase yes)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
