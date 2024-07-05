#include <stdio.h>

/**
 * This is a program that
 * prints its name
 * followed by a new line
 * @argc: returns the number of arguments
 * @argv pointer to the argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
