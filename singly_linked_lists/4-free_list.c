#include <stdio.h>
#include <strings.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list
 * @head: something
 * Return: check the code
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
