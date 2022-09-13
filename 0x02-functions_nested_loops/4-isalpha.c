#include "main.h"

/**
 * _isalpha - identifies the alphabetic character
 * @c: accepts any ascii character as a parameter
 * Return: 0 if not an alphabetic character and 1 if alphabetic
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
