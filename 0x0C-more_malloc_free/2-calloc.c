#include "main.h"

/**
  *_calloc - allocates mem for an array given number of elements and size
  *@nmemb: number of elements
  *@size: size of each element
  *Return: NULL on fail/error and pointer to allocated memory on succcess
  *
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, (nmemb * size));
	return (ptr);
}

/**
  *_memset - sets first n bytes of the memory area
  *@s: array to set
  *@b: what to set it to
  *@n: first n bytes
  *
  *Return: s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
