#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch, n, x;

		for (ch = 48; ch <= 57; ch++)
		{
			for (n = 49; n <= 57; n++)
			{
				for (x = 50; x <= 57; x++)
				{
					if (x > n && n > ch)
					{
						putchar(ch);
						putchar(n);
						putchar(x);
						if (ch != 55 || n != 56 || x != 57)
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
		return (0);
}

