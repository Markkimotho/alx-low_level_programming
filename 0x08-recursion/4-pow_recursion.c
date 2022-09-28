#include "main.h"

/**
  *_pow_recursion - finds the value of x raised to the power of y
  *@x: int value of x
  *@y: int value of y
  *Return: -1 if y < 0
  *1 if y == 0
  *the result if y > 0
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
