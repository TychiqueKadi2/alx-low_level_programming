#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: initial string
 * Return: memory to pointer
 */
char *_strdup(char *str)
{
	size_t a, b;
	char *strno;

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	strno = (char *)malloc(sizeof(char) * (a + 1));

	if (strno == NULL)
	{
		return (NULL);
	}

	for (b = 0; b <= a; b++)
	{
		strno[b] = str[b];
	}
	return (strno);
}
