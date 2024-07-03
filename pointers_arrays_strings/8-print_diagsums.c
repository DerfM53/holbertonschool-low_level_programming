#include "main.h"
#include <stdio.h>
/**
 *  print_diagsums - Affiche la somme des diagonales principales et secondaires
 *  d'une matrice carrée de taille 'size'.
 * @a: Pointeur vers le premier élément de la matrice.
 * @size: Taille de la matrice (nombre de lignes et de colonnes).
 *
 * Description: Cette fonction calcule et affiche les sommes des éléments
 * situés sur la diagonale principale et la diagonale secondaire
 * de la matrice carrée de taille 'size'. La diagonale principale
 * est formée par les éléments a[0][0], a[1][1], ..., a[size-1][size-1],
 * et la diagonale secondaire est formée par les éléments
 * a[0][size-1], a[1][size-2], ..., a[size-1][0].
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

for (; i < size; i++)
	{
	sum1 += *(a + i * size + i);
	sum2 += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
