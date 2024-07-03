#include <stdio.h>
#include "main.h"

void _puts_recursion(char *s)
{
	int i;

	if (s[i] == '\0')
	{
		printf("\n");
	}
	if (s[i] != '\0')
	{
		printf("%s\n", s);
		i++;
	}
}
