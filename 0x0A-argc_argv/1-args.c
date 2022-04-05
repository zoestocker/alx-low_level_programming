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
	int n;
	(void)argv;

	if (argc >= 0)
	{
		n = argc - 1;
		printf("%d\n", n);
	}
	return (0);
}
