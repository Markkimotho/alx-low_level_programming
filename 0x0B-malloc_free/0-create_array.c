#include "main.h"

/**
  *create_array - creates array of chars,initializes it with a specific char
  *@size: how large the array should be
  *@c: argument for char
  *Return: NULL if size is 0
  *pointer to the array or NULL if it fails
  */


char *create_array(unsigned int size, char c)
{

	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(*arr));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
