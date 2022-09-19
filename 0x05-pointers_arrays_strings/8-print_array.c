#include "main.h"

/**
  *print_array - print n elements of an array of integers
  *@a: array pointer for int
  *@n: the integer determining number of times to print elements
  *Return: none
  *
  */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);

		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
