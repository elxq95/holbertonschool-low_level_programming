#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that
 * frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: pointer to a pointer to an integer
 * @height: integer
 * Return: check the code
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
