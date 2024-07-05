#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds
 * positive numbers
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
			{
				if (atoi(argv[i]) < 0)
				{
					printf("Error\n");
					return (1);
				}
			}

		}
		printf("%d\n", sum);
	}
	return (0);
}
