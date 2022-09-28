#include "main.h"

/**
  *is_prime_number - determines whether an integer is prime or not
  *@n: integer to be checked
  *
  *Return: 1 if it's prime, 0 otherwise
  *
  */

int is_prime_number(int n)
{
	return (find_prime(n, 2, n / 2));
}

/**
  *find_prime - checks for the actual prime
  *@n: int
  *@i: int
  *@lim: where to stop
  *
  *Return: 0
  */

int find_prime(int n, int i, int lim)
{
	if ((n % i == 0 && i <= lim) || n < 0 || n == 1)
		return (0);
	else if (n % i != 0 && i <= lim)
		return (helper_prime(n, i + 1, lim));
	else
		return (1);
}
