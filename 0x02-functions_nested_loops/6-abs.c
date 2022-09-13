#include "main.h"
/**
  *_abs - finds an absolute integer value
  *@n: accepts integer values
  *Return: 0 for successful execution
  *
  */

int _abs(int n)
{
	int m;

	if (n < 0)
	{
		m = n * (-1);
		return (m);
	}
	else
	{
		return (n);
	}
}
