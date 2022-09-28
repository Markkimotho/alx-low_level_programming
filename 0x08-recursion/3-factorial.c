#include "main.h"

/**
  *factorial - finds the factorial of the integer n
  *
  *@n: integer for factorial
  *
  *Return: 1 if n is 1
  *-1 if n<0
  *factorial of n if n>1
  */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
