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
	unsigned int i = 0;

	arr = malloc(size * sizeof(c));

	while (i < size)
	{
		if (arr == NULL)
		{
			return (NULL);
		}

		arr[i] = c;
		i++;
	}
	return (arr);
}
