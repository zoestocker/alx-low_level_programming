#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments passed
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 2)
	{
		for (i = 2; i < argc; i++)
		{
			printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		}
	}
	if (argc < 2)
	{
		printf("Error\n");
	}
	return (0);
}
