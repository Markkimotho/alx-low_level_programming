#include "main.h"

/**
  *print_most_numbers - prints numbers 0-9 excluding 2&4
  *
  *Return: void / it is not needed
  */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 || i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}

