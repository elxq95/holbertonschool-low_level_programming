#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies string from
 * an array to another array
 * @dest: destination
 * @src: pointer holding a string
 * Return: Always 0;
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
