#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This is a C program that
 * prints single digits of integers
 * of base 10 using putchar
 * ASCII 0,1,2,3 = 48,49,50 and so on
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
