#include <stdio.h>
/**
 *main - entry point
 *Return: 0 when successful
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	return (0);
}
