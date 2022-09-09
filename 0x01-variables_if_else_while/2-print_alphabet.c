#include <stdio.h>
/**
 *main - entry point
 *Return: 0 when successful
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
