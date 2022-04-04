#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the program name, followed by a newline
 * @argc: the number of arguments passed in a program
 * @argv: the arguments passed in a program
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
