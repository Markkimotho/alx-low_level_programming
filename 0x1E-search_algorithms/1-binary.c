#include "search_algos.h"

/**
* binary_search - performs a binary search
* @array: array to be searched
* @size: size of array
* @value: value to be looked for
*
* Return: Index of the value in the array
*	  -1 otherwise
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		print_array(array + left, right - left + 1);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
* print_array - prints an array of integers
* @array: pointer to the first element of the array to print
* @size: number of elements in the array
*/

void print_array(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}
