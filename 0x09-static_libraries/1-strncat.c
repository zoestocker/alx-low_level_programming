#include "main.h"
#include <string.h>

/**
 * _strncat - Appends src to dest, but will use at most
 * n bytes from src, and will not be null-terminated
 * @src: string
 * @dest: string
 * @n: integer
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
