#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of the char
 * @c: the char
 *
 * Return: NULL if size = 0, or if it fails
 * or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
