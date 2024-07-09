#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Libère la mémoire allouée pour unbleau 2D d'entiers
 * @grid: Le pointeur vers le tableau 2D
 * @height: La hauteur du tableau 2D (nombre de lignes)
 */

void free_grid(int **grid, int height)
{
	int j;

for (j = 0; j < height; j++)
	{
	free(grid[j]);
	}
	free(grid);
}
