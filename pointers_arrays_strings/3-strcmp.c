#include <stdio.h>
#include "main.h"

/**
 * _strcmp - function that compares
 * two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return : finalnum
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int finalnum = 0;
	int compare = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && compare == 0)
	{ 
		if (s1[i] != s2[i])
		{
			finalnum = s1[i] - s2[i];
			compare = 1;
		}
		i++;
	}
	if (compare == 0)
	{
		finalnum = s1[i] - s2[i];
	}
	return (finalnum);
}
