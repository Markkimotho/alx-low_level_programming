#include "main.h"

/**
  *free_grid - frees up a 2D grid
  *@grid: double pointer 2D grid
  *@height: heigth of grid
  *Return: none
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
