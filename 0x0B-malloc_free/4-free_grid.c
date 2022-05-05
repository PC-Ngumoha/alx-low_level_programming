#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees up the memory allocated by an already existing grid
 * @grid: Grid we want to free from memory
 * @height: Height of the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
