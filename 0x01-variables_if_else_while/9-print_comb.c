#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point
 * Return: 0 while succesful
 *
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
