#include "main.h"
/**
  *print_last_digit - function that prints the last digit of a number
  *@n: the number to be checked
  *Return: returns the last digit
  *
  */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		m = (n % 10) * (-1);
		_putchar(m + '0');
		return (m);
	}
	else
	{
		m = n % 10;
		_putchar(m + '0');
		return (m);
	}
}
