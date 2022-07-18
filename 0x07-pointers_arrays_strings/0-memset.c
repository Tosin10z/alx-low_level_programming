#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: int pointer
 * @b: int parameter
 * @n: int parameter
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
