#include "main.h"

/**
  *rot13 - authentication that rotates chars 13 places in the alphabet
  *
  *@str: array of characters
  *
  *Return: a string str rotated
  *
  */

char *rot13(char *str)
{
	int i;

	char stchar storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char storel[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			str[i] = (str[i] - 65 > 25) ?
				storel[str[i] - 97] : storeh[str[i] - 65];
		}

	}
	return (str);
}
