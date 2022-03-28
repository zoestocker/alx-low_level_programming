#include <stdio.h>

/**
 * main - Prints Fizz instead of multiples of 3
 * prints Buzz instead of multiples of 5
 * print FizzBuzz for ,ultiples of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
