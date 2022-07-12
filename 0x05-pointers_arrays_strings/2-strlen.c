#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string pointer
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
	}
	return (len);
}
