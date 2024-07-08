#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_strconcat - function that
 * concatenates two strings.
 * @s1 - pointer to string 1
 * @s2 - pointer to string 2
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int length;
	char combine;

	for (length = 0; s1[length] != '\0'; length++)
	{
		s1 = (char *)malloc((length + 1) * (sizeof(char)));
		{
			i = 0;
			while (i != '\0')
			{
				s1[length] = s2[i];
			}
			i++;
		}
	}
	
	if (i > length)
	{
		return (NULL);
	}
}
