#include "main.h"

/**
  *string_nconcat - concatenate 2 strings, only n bytes of s2
  *@s1: 1st string
  *@s2: 2nd string
  *@n: number of s2 bytes to inlude
  *Return: NULL on failure, else pointer to malloc memory
  *
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int strlen1, i, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen1 = (unsigned int)_strlen(s1);
	p = malloc((strlen1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0, c = 0; i < (strlen1 + n); i++)
	{
		if (i < strlen1)
			p[i] = s1[i];
		else
			p[i] = s2[c++];
	}
	p[i] = '\0';

	return (p);
}

/**
  *_strlen - length of a string
  *@s: a string
  *Return: length of a string
  *
  */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
