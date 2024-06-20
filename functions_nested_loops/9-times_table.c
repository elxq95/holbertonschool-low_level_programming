#include "main.h"
#include <stdio.h>
/**
 * times_table - function that prints
 * the 9 times table, starting with 0
 *
 * Return: check the code
 */
void times_table(void)
{
	int i, h;
	int value;


	for (h = 0; h < 10;  h++)
	{
		for (i = 0; i < 10; i++)
		{
			value = h * i;
			{
				if (value < 10)
				{
					_putchar(value + '0');
					{
						if (h != 9)
						{
							_putchar(',');
							_putchar(' ');
						}
						else
						{
							_putchar('\n');
						}
					}
				}
			}
		}	
	}
}
