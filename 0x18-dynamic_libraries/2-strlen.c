#include "main.h"
/**
 * _strlen - shows string length
 * @s: string ro measure
 * Return: length
 */
int _strlen(char *s)
{
	int los = 0;

	while (*s != '\0')
	{
		los++;
		s++;
	}
	return (los);
}
