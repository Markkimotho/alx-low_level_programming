#include "main.h"

/**
  *puts_half - prints out the 2nd half of a string
  *@str: array of character that form a string
  *Return: none
  *
  */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	i++;

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
