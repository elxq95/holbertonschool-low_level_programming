#include <stdio.h>
#include "main.h"

/**
 * *leet - function
 * that encodes a string into 1337
 * @s: pointer to a string
 * Return: s
 */

char *leet(char *s)
{
	char replacements[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet_chars[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int index = 0;
	int replacementIndex;

	while (s[index] != '\0')
	{
		for (replacementIndex = 0; replacementIndex < 10; replacementIndex++)
		{
			if (s[index] == replacements[replacementIndex])
			{
				s[index] = leet_chars[replacementIndex];
				break;
			}
		}
		index++;
	}
	return (s);
}
