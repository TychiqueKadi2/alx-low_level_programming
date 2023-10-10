#include "main.h"
/**
 * islower - check is alphabet is lowercase
 * Return: 1 (lowercase yes)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
