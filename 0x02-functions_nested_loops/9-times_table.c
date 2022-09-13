#include "main.h"
#include <stdio.h>

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
			printf("%i", k);

			if (j != 9)
			{
				printf(", ");

				if (k <= 9)
				{
					printf(" ");
				}
			}

		}
		_putchar(' ');
	}
}
