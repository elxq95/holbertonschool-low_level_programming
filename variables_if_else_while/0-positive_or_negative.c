#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This is a C program that determines if a number
 * is positive, zero or negative.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n");
	else
		printf("is negative\n");

	return (0);
}
