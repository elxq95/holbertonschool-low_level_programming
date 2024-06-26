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

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	i = 0;

	while (i < length)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
