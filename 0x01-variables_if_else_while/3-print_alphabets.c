#include <stdio.h>
/**
 * main - entry main
 * Return: 0 always
 */
int main(void)
{
	char ch = 'a';
	char chh = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (chh <= 'Z')
	{
		putchar(chh);
		chh++;
	}
	putchar('\n');
	return (0);
}
