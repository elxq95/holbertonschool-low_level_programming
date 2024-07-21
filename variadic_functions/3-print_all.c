#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character.
 * @args: The list of arguments.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - Prints an integer.
 * @args: The list of arguments.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - Prints a float.
 * @args: The list of arguments.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - Prints a string.
 * @args: The list of arguments.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);
	
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

void print_all(const char * const format, ...)
{
	format_spec_t specs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	va_list args;
	unsigned int i = 0, j;
	char *separator = "";

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (specs[j].spec != '\0')
		{
			if (format[i] == specs[j].spec)
			{
				printf("%s",separator);
				specs[j].print_func(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
