#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that
 * prints binary representation of a number
 * @n: unsigned long int
 * Return: check the code
 */

void print_binary(unsigned long int n)
{
       	unsigned long int mask = 1UL << 63;
	int started = 0;

    while (mask > 0)
    {
        if (n & mask != 0)
        {
            _putchar('1');
            started = 1;
        }
        else if (started != 0 && (n & mask) == 0)
        {
            _putchar('0');
        }
        mask >>= 1;
    }

    if (started == 0)
    {
        _putchar('0');
    }
}
