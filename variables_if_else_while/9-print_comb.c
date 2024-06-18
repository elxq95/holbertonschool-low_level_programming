#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This is a C program that
 * prints base 10 numbers in single
 * digits with a "," and a space after
 * each occuring number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
