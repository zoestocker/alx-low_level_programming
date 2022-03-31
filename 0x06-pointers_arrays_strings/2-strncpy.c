#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
