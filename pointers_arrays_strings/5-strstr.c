#include <stdio.h>
#include "main.h"

/** *_strstr - function that
 * locates a substring
 * @haystack: pointer to a string
 * @needle: pointer to a string
 * Return: @needle or null
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j;
	int findword = 1;
	int foundword = 0;
	
	while (haystack[i] != '\0' && findword == 1)
	{
		j = 0;
		foundword = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				foundword = 1;
				findword = 0;
			}
			j++;
		}
		if (foundword == 1)
		{
			return (needle);
		}
		i++;
	}
	return (NULL);
}
