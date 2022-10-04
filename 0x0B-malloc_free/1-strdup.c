#include "main.h"

/**
  *_strdup - returns space to newly allocated space in memory
  *@str: string to be duplicated
  *Return: NULL is str is NULL/insufficient memory
  *a pointer to the duplicated string if successful
  *
  */

char *_strdup(char *str)
{
	char *arr;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	arr = malloc(i * sizeof(*arr) + 1);

	if (arr == NULL)
		return (NULL);

	for (len = 0; len < i; len++)
		arr[len] = str[len];

	arr[len] = '\0';

	return (arr);

}
