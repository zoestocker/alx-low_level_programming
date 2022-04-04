#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	if (argc >= 0)
	{
		printf("%d\n", argc);
	}
	return (0);
}
