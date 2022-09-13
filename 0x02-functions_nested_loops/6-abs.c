#include "main.h"
/**
  *_abs - finds an absolute integer value
  *@int: accepts integer values
  *Return: 0 for successful execution
  *
  */

int _abs(int n)
{
	int m;

	if (n < 0)
	{
		m = n * (-1);
		_putchar(m);
		return (0);
	}
	else
	{
		_putchar(n);
		return (0);
	}
}
