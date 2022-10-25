#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
  *add_node - add new node to beginning of list
  *@head: double pointer to head
  *@str: string to be saved in new node, must be duplicated
  *Return: address of new element or NULL if failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_node->len = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
