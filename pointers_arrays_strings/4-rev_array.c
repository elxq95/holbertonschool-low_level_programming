#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses
 * the content of an array
 * of integers
 * @a: pointer to an array of integers
 * @n: number of elements of the array
 * Return: (reva)
 */

void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;
	int reverse = 0;

	if (n > 0)
	{
		reverse = 1;
	}

	while (start < end && reverse)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
