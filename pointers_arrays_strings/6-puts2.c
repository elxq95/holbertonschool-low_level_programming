#include <stdio.h>
#include "main.h"

/**
 * puts2: prints every other
 * character of a string,
 * starting with the first character
 * @str: pointer to the first character
 * of an string/array
 * Return: Always 0
 */

void puts2(char *str)
{
	int length;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	i = length - 1;

	while (i >= 0)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
