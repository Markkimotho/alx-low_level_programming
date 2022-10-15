#include "variadic_functions.h"
#include <stdarg.h>

/**
  *sum_them_all - returns the sum of all the parameters
  *@n: number of arguments
  *
  *Return: 0 when 0 and sum when not 0
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list my_nums;
	unsigned int count;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;

	va_start(my_nums, n);


	for (count = 0; count < n; count++)
	{
		sum += va_arg(my_nums, int);
	}
	va_end(my_nums);
	return (sum);
}
