#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		if (ch != 113 && ch != 101)
			putchar(ch);
	putchar(10);
	return (0);
}
