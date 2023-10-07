#include <stdio.h>
/**
 * main - prints all possible diff combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int Os = '0';
	int Ts = '0';

	for (Ts = '0'; Ts <= '9'; Ts++)
	{
		for (Os = '0'; Os <= '9'; Os++)
		{
			if (!((Os == Ts) || (Ts > Os)))
			{
				putchar(Ts);
				putchar(Os);
				if (!(Os == '9' && Ts == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
