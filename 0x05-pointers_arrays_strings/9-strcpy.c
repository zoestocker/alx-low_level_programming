#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Copies the string pointed to be src
 * to the buffer pointed to by dest.
 * @dest: pointer to string
 * @src: pointer to string
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
