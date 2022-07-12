#include "main.h"

/**
 * _strcpy - copies the string pointed to ny src
 * @dest: A buffer to copy the string to
 * @src: A source string to copy
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}

