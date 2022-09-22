#include "main.h"

/**
  *reverse_array - prints out the array in reverse order
  *@a: an array with integers
  *@n: number of elements in an array
  *
  *Return: none
  */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
