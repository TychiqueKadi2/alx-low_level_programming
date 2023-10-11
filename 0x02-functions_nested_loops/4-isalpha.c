#include "main.h"
/**
 * isalpha - looks for alphabet character
 * @c: the aphabet to be checked
 * Return: 1 if c is an alphabet
 */
int _isalpha(int c)
{
	c = 'a';
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
