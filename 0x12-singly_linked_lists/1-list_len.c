#include "lists.h"

/**
  *list_len - get the number of elements in a linked list
  *@h: head of a linked list
  *Return: number of elements in a list
  */

size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t c;

	c = 0;
	current = h;
	while (current != NULL)
	{
		current = current->next;
		c++;
	}
	return (c);
}
