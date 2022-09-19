#include "main.h"

/**
  *_strlen - finds the length of a certain string
  *@s: the string to be checked
  *Return: the size of the string
  *
  */

int _strlen(char *s)
{
	int n;

	for (n = 1; s[n] != '\0'; n++)
	{
		;
	}
	return (n);
}
