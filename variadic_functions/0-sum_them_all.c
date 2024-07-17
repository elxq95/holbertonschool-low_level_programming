#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/** sum_them_all - function that returns the sum of all
 * its parameters
 * @n: const n
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int total;
	unsigned int i;
	
	if (n == 0)
	{
		return (0);
	}

	total = 0;
	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		total +=  va_arg(args, int);
	}

	va_end(args);
	return (total);
}
