#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - This is a program that prints
 * the alphabets in lowercase
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
