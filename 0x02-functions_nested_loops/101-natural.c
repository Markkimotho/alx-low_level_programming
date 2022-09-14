#include <stdio.h>
/**
  *main - entry point to the program
  *
  *Return: 0 when the program is succesful
  */

int main(void)
{
	int i;

	for (i = 1 ; i < 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			printf("%i", i);
		}
	}
	printf("\n");

	return (0);
}
