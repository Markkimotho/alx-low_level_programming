#include "main.h"
/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
	char pc[] = "_putchar";
	int i;

	for (i = 0; pc[i] != '\0'; i++)
	{
		_putchar(pc[i]);
	}
	_putchar('\n');
	return (0);
}
