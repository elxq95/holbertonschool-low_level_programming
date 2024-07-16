#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - this is a program that
 * @argc:  number of arguments
 * @argv: pointer to an array of characters
 * Return: 0 if successful
 */

int main(int argc, char  **argv)
{
	int (*operation)(int, int);
	int result;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
		return (1);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
		return (1);
	}

	operation = get_op_func(argv[2]);
	result = operation(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}
