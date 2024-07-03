#include <stdio.h>

/**
 * _puts_recursion - a function
 * that prints a string followed
 * by a new line
 * @s: pointer to a string
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		printf("\n");
	}
	if (s[i] != '\0')
	{
		printf("%s\n", s);
		i++;
	}
}
