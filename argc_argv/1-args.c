#include <stdio.h>

/**
 * main - writes a program
 * that prints the number of
 * arguments passed into it
 * @argc = number of arguments
 * @argv = pointer to the arguments
 * Return - Always 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	if (argc = 0)
	{
		printf("0\n");
	}
	return(0);
}
