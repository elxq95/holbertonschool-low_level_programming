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
	
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
			return(needle);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
