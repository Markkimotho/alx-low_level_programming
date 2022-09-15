#include "main"

/**
  *print_line - draws a straight line
  *@n: number of times the line is going to be printed
  *
  *Return: void/none
  */

void print_line(int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
