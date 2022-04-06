#include "main.h"
#include <string.h>

/**
 * _strcat - append src to dest string
 * @src: string
 * @dest: string
 *
 * Return: pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
