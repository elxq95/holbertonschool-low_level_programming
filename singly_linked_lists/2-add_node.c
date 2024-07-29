#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - pointer to a function
 * @head: pointer to a pointer to a struct
 * @str: pointer to a constant string
 * Return: the address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len ++;
	}

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
