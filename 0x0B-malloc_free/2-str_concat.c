#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to newly allocated memory,
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int n, i = 0, j = 0;

	n = strlen(s1) + strlen(s2);
	ptr = (char *) malloc(n * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		ptr[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		ptr[j] = s2[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
	free(ptr);
}
