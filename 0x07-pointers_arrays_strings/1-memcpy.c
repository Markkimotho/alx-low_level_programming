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
	char *y;

	y = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return(y)

}
