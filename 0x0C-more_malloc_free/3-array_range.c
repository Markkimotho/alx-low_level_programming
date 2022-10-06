#include "main.h"

/**
  *array_range - create an array of integers inclusive of min & max
  *@min: minimum value
  *@max: maximum value
  *
  *Return: pointer to newly created array
  *
  */

int *array_range(int min, int max)
{
	int *ptr;
	int diff, i;

	if (min > max)
		return (NULL);
	diff = max - min;
	ptr = malloc((diff + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= diff; min++, i++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
