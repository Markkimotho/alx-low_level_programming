#include "main.h"

/**
  *_isupper - checks for uppercase characters
  *
  *Return: 0 is uppercase, 1 if otherwise
  *
  */

int _isupper(int c)
{
	if ((c >= 65) || (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
