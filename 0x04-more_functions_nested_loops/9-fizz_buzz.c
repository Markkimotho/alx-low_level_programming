#include <stdio.h>

/**
  *main - entry point/ where all the code is contained
  *Description: Fizz-for multiple of 3; Buzz-for multiples of 5
  *FizzBuzz-for multiples of 3 and 5
  *Return: 0 when succesful
  */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	prinf("\n");
	return (0);
}
