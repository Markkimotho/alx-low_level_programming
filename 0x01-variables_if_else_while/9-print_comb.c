#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point
 * Return: 0 while succesful
 *
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
		n++;
		if (n == 9)
		{
			break;
		}

	}
	return (0);
}
