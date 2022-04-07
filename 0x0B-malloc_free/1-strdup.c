#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated string in memory
 * which contains a copy of the string given as a parameter
 * @str: the original string
 *
 * Return: NULL if str = NULL, or if there is insufficient memory,
 * and a pointer to the duplicated string on success
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0, j = 0, n = strlen(str);

	ptr = (char *) malloc(n * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		ptr[j] = str[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
	free(ptr);
}
