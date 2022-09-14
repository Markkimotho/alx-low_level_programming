#include <stdio.h>
/**
  *main - entry point to the program
  *
  *Return: 0 when the program is succesful
  */

int main(void)
{
	int i;
	unsigned int j = 0;

	for (i = 1 ; i < 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j = j + i;
		}
	}
	printf("%i", j);
	printf("\n");

	return (0);
}
