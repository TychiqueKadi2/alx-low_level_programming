#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes to rot13 letters
 * @a: string
 * Return: string
 */
char *rot13(char *a)
{
	int i, j;
	char letters[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rot13[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == letters[j])
			{
				a[i] = rot13[j];
				break;
			}
		}
	}
	return (a);
}
