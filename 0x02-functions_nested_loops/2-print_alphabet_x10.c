#include "main.h"
/**
 *print_alphabet_x10 - prints the alphabet letters 10 times
 *
 *Return: void which means it excludes the return value
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
