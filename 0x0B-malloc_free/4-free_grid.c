#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - 2 dim. grid. Created by your alloc_grid function.
 * @grid: Freed grid.
 * @height: height of the array.
 */
void free_grid(int **grid, int height)
{

	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);

}
