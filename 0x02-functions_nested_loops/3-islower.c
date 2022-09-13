#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: accepts any ascii character as a parameter
 * Return: 0 is c isn't a lowercase char and 1 if c is lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
