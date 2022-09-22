#include "main.h"

/**
  *_strncpy - copy a string starting from index 0 of destination
  *@dest: destination string
  *@src: source string
  *@n: number of characters to copy over
  *
  *Return: destination string that has been changed
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; n > i; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
