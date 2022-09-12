#include <stdio.h>

/**
 * main - entry point
 * Return: 0 when succesfully run
 *
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0 ; i < 1000 ; i++)
	{
		j = i / 100;
		k = (i / 10) % 10;
		l = i % 10;

		if (j < k && k < l)
		{
			putchar (j + '0');
			putchar (k + '0');
			putchar (l + '0');

			if (i < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
