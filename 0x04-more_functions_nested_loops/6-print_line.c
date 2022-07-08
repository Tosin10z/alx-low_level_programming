#include "main.h"

/**
 * print_line - draws a straght line
 * @n: The number of lines to draw
 *
 * Return: the line
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar ('\n');
	}
	else
	{
			_putchar('\n');
	}
}
