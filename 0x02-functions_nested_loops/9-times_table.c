#include "main.h"

/**
  *times_table - prints the times table of 9
  *
  *Return: void/nothing
  *
  */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar(k + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}


		}
		_putchar('\n');
	}
}
