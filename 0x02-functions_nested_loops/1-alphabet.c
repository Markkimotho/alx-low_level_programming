#include "main.h"
/**
 *print_alphabet - custom function
 *Description: Prints out the alphabet letter in lowercase in one line followed by a newline
 *Return: void meaning the return type does not matter
 */
void print_alphabet(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
