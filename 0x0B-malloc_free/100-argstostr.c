#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array containing arguemnts
 * Return: pointer to array
 */
char *argstostr(int ac, char **av)
{
	char *ary;
	int a, b, k = 0, l = 0;

	if (ac == 0 || av == '\0')
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			l++;
	}
	l += ac;

	ary = malloc(sizeof(char) * l + 1);
	if (ary == NULL)
	{
		return (NULL);
	}
}
