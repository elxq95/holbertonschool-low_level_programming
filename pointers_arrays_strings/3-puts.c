#include <stdio.h>
#include "main.h"

/**
 * _puts - functions that
 * prints a string
 * @str: characters
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
