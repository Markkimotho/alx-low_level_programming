#include "main.h"

/**
  *more_numbers - prints nums 0-14 ten times
  *
  *Return: void / none
  */

void more_numbers(void)
{
	int i, j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 1 ; j <= 14 ; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
