#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Copies the string pointed o be src
 * to the buffer pointed to by dest.
 * @dest: pointer to a string
 * @src: pointer to a string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
