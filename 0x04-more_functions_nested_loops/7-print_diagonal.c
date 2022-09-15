#include "main.h"

/**
  *print_diagonal - prints \ at the end
  *@n: number of times \ is printed to form diagonal
  *Return: none
  */

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (n > 0)
	{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');

		i++;
		n--;
	}
	if (i < 1)
	{
		_putchar('\n');
	}
}
