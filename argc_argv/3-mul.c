#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that
 * multiplies two numbers
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int value;
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		value = a * b;
		printf("%d\n", value);
	}
	return (0);
}
