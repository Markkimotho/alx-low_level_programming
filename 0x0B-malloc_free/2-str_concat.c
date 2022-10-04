#include "main.h"

/**
  *str_concat - concatentes two strings
  *@s1: parameter for string 1
  *@s2: parameter for string 2
  *Return: NULL if string is empty/ on failure
  *the concatenated string in turn
  *
  */

char *str_concat(char *s1, char *s2)
{
	int a, b, c;
	char *arr;

	c = 0;
	arr = malloc(sizeof(*s1 + *s2));

	if (arr == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (s1[a] != '\0')
	{
		arr[c] = s1[a];
		a++;
		c++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		arr[c] = s2[b];
		b++;
		c++;
	}
	return (arr);
	free(arr);
}
