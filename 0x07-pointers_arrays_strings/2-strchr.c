#include "main.h"

/**
  *_strchr - locates a character in a string
  *@s: string
  *@c: character we are looking for
  *
  *Return: NULL if char not found/ pointer to first occurence of char
  *
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
