#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function that selects
 * the correct function to perform the operation
 * asked by the user
 * @s: operator passed as argument to the program
 * Return: 0 if succesful
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (*ops[i].op != *s)
	{
		i++;

		if ((i > 4) || (s[1] != '\0'))
		{
			printf("Error\n");
			exit(99);
		}
	}
	return (ops[i].f);
}
