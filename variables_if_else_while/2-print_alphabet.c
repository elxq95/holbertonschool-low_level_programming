#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is a C program that prints
 * alphabets in lower case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
