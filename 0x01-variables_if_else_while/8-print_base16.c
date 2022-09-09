#include <stdio.h>
/**
 *main - entry point into the program
 *Return: 0 when succesful
 */
int main(void)
{
	int n = 0;
	char ch = 'a'

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
