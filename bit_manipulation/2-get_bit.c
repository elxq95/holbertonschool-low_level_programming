#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to check
 * @index: The index of the bit to get, starting from 0
 *
 * Return: The value of the bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
