#include <stdio.h>
#include <math.h>

/**
  *main - entry point to the program
  *
  *Return: 0 when succesful
  */

int main(void)
{
	int i;
	long n = 612852475143;

	for (i = (int) sqrt(num); i > 2; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}

