#include "main.h"

/**
  * *_strcpy - it copies the string pointed to by pointer
  * src to buffer pointed to by dest
  *@dest: character array
  *@src: character array
  *
  *Return: character -- pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
