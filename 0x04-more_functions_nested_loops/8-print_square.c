#include "main.h"

/**
  *print_square - prints the size of a squate using #
  *@size: the size of the square
  *Return: void/none
  */

void print_square(int size)
{
	int i, j;

	for (i = 1 ; i <= size : i++)
	{
		for (j = 1 ; j <= size ; j++)
		{
			if (size <= 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
