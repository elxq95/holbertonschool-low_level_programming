#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <steddef.h>

/**
 * free_dlistint - function that frees a
 * dlistint_t list
 * @head: pointer to a struct element
 * Return: Check the code
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->n);
		free(temp);
	}
}