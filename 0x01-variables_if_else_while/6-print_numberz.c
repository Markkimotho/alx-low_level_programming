#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: 0 if succesful
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
