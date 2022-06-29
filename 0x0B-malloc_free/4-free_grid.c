#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2 dimensional grid created by your alloc_grid
  * @grid: array of int
  * @height: height of grid
  *
  */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
