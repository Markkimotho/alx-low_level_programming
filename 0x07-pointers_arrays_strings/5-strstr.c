#include "main.h"
#include <stdlib.h>

/**
  *_strstr - locate a substring
  *@haystack: string
  *@needle: string substring
  *
  *Return: pointer to beginning of substring or NULL if not found
  *
  */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *beginning = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0'
				&& *haystack != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
			return (beginning);
		haystack = beginning + 1;
	}

	return ('\0');
}

