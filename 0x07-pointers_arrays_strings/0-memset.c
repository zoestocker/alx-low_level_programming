#include "main.h"
#include <string.h>

/**
 * _memset - Fills the memory with a constant byte
 * @s: Pointer to the specified area
 * @b: The byte that fills the memory
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
