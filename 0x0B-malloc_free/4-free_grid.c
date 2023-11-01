#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - It frees a previusly created a array grid
  * @grid: Width of array
  * @height:  Height of array
  *
  * Return: Nothing
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
