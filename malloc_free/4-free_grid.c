#include "main.h"
#include <stdlib.h>
/**
 * free_grid - main entry
 * @grid: variable
 * @height: variable
 * Return: 0 or NULL
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
