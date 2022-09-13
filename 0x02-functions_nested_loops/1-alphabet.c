#include "main.h"
/**
 *main - entry point
 *Description: Prints out the alphabet letter in lowercase in one line followed by a newline
 *Return: 0 on successful execution
 */
int main(void)
{
	void print_alphabet(void)
	{
		char ch;

		for(ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}

	print_alphabet();
}



