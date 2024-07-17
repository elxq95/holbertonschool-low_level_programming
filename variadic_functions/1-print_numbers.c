#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - this is a function
 * that prints numbers, followed by 
 * a new line.
 * @seperator:
 * @n:
 * Return: check the code
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			printf("%s%d", separator, va_arg(args, int));
		}
	}
	va_end(args);
	printf("\n");
}
