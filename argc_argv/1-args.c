#include <stdio.h>
#include <stdlib.h>

/**
 * main - writes a program
 * that prints the number of
 * arguments passed into it
 * @argc: number of arguments
 * @argv:  pointer to arguments
 * Return:  Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int count;

	count = argc - 1;
	printf("%d\n", count);
	return (0);
}
