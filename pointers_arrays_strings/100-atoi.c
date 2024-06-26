#include <stdio.h>
#include "main.h"

/**
 * _atoi- function that
 * converts a string to an integer
 * @s: pointer to a string
 * Return: Always 0
 */

int _atoi(char *s)
{
	int count = 0;
	int sign = 1;
	int evalnum = 0;
	int evaldone = 0;
	int digit;
	unsigned int finalnum = 0;

	while (s[count] != '\0')
	{
		digit = s[count];
		if ((digit >= 48) && (digit <= 57) && (evaldone == 0))
		{
			evalnum = 1;

			finalnum = (finalnum * 10) + (digit - 48);
		}
		else
		{
			if (evalnum == 1)
			{
				evaldone = 1;
			}
		}
		if (evalnum == 0 && s[count] == '-')
		{
			sign = sign * -1;
		}

		count = count + 1;
	}

	return (sign * finalnum);
}
