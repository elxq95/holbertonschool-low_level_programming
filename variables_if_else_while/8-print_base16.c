#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This is a C program that
 * prints values of base 16
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char ch;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
