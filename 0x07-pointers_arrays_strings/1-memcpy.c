#include "main.h"

/**
  *_memcpy - copy memory area
  *@dest: string to copy into
  *@src: string to copy from
  *@n: number of elements to copy
  *
  *Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
