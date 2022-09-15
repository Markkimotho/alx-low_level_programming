#include "main.h"

/**
  *_isdigit - checks whether a character is an digit or not
  *@c: accepts any character as parameter
  *Return: 0 if not a digit, 1 if a digit
  */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
