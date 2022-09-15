#include "main.h"

/**
  *print_number - it prints an integer
  *@n: integer of type number
  *
  */


void print_number(int n)
{
	long i;
	int j;
	long no;

	no = n;

	if (no < 0)
	{
		no *= -1;
		_putchar('-');
	}

	i = 1;
	j = 1;

	while (j)
	{
		if (no / (i * 10) > 0)
			i *= 10;
		else
			j = 0;
	}
	while (no >= 0)
	{
		if (i == 1)
		{
			_putchar(no % 10 + '0');
			no = -1;
		}
		else
		{
			_putchar((no / i % 10) + '0');
			i /= 10;
		}
	}
}
