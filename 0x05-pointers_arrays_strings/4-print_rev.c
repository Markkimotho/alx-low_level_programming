#include "main.h"

/**
  *print_rev - outputs a string in reverse
  *@s: the string to be reversed
  *Return: none
  *
  */

void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		;
	}
	for (n--; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}

