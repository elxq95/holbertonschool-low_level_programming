#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This is a C program that prints
 * lowercase letters then
 * uppercase letters
 * Return: Always 0 (Success)
 */

int main(void)
		{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
{
	putchar(lower);
}
	for (upper = 'A'; upper <= 'Z'; upper++)
{
	putchar(upper);
}
putchar('\n');
	return (0);
}
