#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - Alloue de la mémoire pour un tableau 2D d'entier
 * et initialise chaque élént
 * @width: La largeur du tableau 2D.
 * @height: La hauteur du tableau 2D.
 *
 * Return: Un pointeur vers le tableau 2D d'entiers, ou NULL
 * si l'allocation échoe
 * ou si la largeur ou la hauteur est égale ou inférieu.
 */
int **alloc_grid(int width, int height)
{
	int **grid = malloc(height * sizeof(int *));
	int i;
	int j;


	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	if (grid == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(grid[j]);
	}
	free(grid);
	return (NULL);
	}
	}
	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
	{
	grid[i][j] = 0;
	}
	}
	return (grid);
}
