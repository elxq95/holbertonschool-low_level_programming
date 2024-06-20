#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This is a C program that
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[] = "void print_alphabet(void);";
	int i;

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
