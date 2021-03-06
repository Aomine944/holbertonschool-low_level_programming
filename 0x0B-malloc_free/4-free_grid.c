#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid : grid to be freed
 * @height : grid height
 *
 * Return: None
 */

void free_grid(int **grid, int height)
{
	int i;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
