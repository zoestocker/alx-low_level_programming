#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string being searched
 * @accept: string containing the bytes being searched for
 *
 * Return: pointer to the byte in s that matches those is accept,
 * NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *r;

	r = strpbrk(s, accept);
	return (r);
}
