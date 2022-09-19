#include "main.h"

/**
  *rev_string - reverses the order of a string
  *@s: an array of characters to be reversed
  *Return: none
  *
  */

void rev_string(char *s)
{
	int i, j, k;
	char ch;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	k = i;
	for (i--; j = 0; j < k / 2; i--, j++)
	{
		ch = s[j];
		s[j] = s[i];
		s[i] = ch;
	}
}
