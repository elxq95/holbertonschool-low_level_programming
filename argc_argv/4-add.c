#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds
 * positive numbers
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, j;
	int sum;
	int value;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			value = atoi(argv[i]);

			if (value < 0)
			{
				printf("Error\n");
				return (1);
			}

			sum += value;
		}
		printf("%d\n", sum);
	}
	return (0);
}
