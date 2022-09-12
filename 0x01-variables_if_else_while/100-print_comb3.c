#include <stdio.h>
/**
 * main - all our code goes in here
 * Return: 0 When succesful
 */
int main(void)
{
	int i, j, k;

	for (i = 0 ; i < 100 ; i++)
	{
		j = i / 10;
		k = i % 10;

		if (j < k)
		{
			putchar(j + '0');
			putchar(k + '0');

			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);

}
