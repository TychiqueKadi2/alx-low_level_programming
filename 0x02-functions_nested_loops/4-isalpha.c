#include "main.h"
/**
 * isalpha - looks for alphabet character
 * @c: the aphabet to be checked
 * Return: 1 if c is an alphabet
 */
int _isalpha(int c)
{
	c = 'a';
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
