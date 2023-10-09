#include <stdio.h>
/**
 * main - prints all diff combinations of three digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int Os = '0';
	int Ts = '0';
	int Hs = '0';

	for (Hs = '0'; Hs <= '9'; Hs++)
	{
		for (Ts = '0'; Ts <= '9'; Ts++)
		{
			for (Os = '0'; Os <= '9'; Os++)
			{
				if (!((Os == Ts) || (Ts == Hs) || (Ts > Os) || (Hs > Ts)))
				{
					putchar(Hs);
					putchar(Ts);
					putchar(Os);
					if (!(Os == '9' && Hs == '7' && Ts == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
