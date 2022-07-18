#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: int pointer
 * @src: int pointer
 * @n: int parameter
 *
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

			return (dest);
}
