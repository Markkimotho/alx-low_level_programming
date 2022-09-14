#include "main.h"

/**
  *jack_bauer - prints every minute of the day from 00:00-23:59
  *
  *Return: doesn't really matter
  */
void jack_bauer(void)
{
	int n;
	int i = 0, j = 0, k = 0, l = 0;

	for (n = 0; n < 1440; n++)
	{
		_putchar(i + '0');
		_putchar(j + '0');
		_putchar(':');
		_putchar(k + '0');
		_putchar(l + '0');
		_putchar('\n');

		if (l > 9)
		{
			l = 0;
			l++;
		}
		if (k > 5)
		{
			k = 0;
			k++;
		}
		if (j > 9)
		{
			j = 0;
			j++;
		}
		if (i > 5)
		{
			i = 0;
			i++;
		}

	}

}
