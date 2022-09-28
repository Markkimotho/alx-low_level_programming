#include "main.h"

/**
  *_sqrt_recursion - finds a natural square root of a number
  *
  *@n: integer to be evaluated
  *
  *Return: 0
  *
  */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (help(n, 1));
}

/**
  *help - helper function for sqrt_recursion()
  *
  *@n: number
  *
  *@i: incrementor
  *Return: -1
  */

int help(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (help(n, i + 1));
	else
		return (-1);
}
