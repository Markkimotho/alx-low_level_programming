#include "search_algos.h"

/** 
* linear_search - performs a linear search
* @array: array to be searched
* @size: size of the array
* @value: value to look for
*
* Return: Index of the value
*	  -1 if not found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index;
	if(array == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if(array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
