#include <stdio.h>
#include <strings.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint - function that adds
 * a new node at the beginning of a dlistint_t
 * @head: pointer to a pointer to the node
 * @n: constant integer
 * Return: address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node  == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_nodei;
	
	return (new_node);
}	
