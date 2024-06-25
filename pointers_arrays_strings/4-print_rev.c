#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string,
 * in reverse, followed by
 * a new line
 * @s: characters
 * Return: Always 0
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	int i;
	i = length - 1;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
