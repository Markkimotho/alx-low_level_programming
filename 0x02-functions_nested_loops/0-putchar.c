#include "main.h"
/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
	char pc[] = "_putchar";

	for (int i = 0; pc[i] != '\0'; i++)
	{
		_putchar(pc[i]);
	}
	return (0);
}
