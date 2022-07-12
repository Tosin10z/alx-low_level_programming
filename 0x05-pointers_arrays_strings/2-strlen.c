#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string pointer
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
