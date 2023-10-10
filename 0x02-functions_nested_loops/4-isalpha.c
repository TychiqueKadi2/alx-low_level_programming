#include "main.h"
/**
 * isalpha - looks for alphabet character
 * Return: 1 if c is an alphabet
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
