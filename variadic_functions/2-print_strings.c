#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);

		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}
	va_end(args);
	printf("\n");
}
