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

	arr = malloc(sizeof(str));

	i = len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}

	return (arr);

}
