#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This is a C program that
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
