#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point
 * Return: 0 when succesful
 *
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);

}
