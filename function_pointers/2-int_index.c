#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - Cherche un entier dans un tableau
* @array: Le tableau d'entiers à chercher
* @size: Le nombre d'éléments dans le tableau
* @cmp: Pointeur vers la fonction de comparaison à utiliser
 * Description: Cette fonction cherche l'index du premier élément
 * dans le tableau 'array' pour lequel la fonction 'cmp' ne retourne
 * pas 0. Si aucun élément ne correspond ou si la taille du tableau
 * est <= 0, la fonction retourne -1.
 *
 * Return: L'index du premier élément correspondant, ou -1 si aucun
 * élément ne correspond ou si la taille est <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		{
		return (-1);
		}
	for (i = 0; i < size; i++)

	if (cmp(array[i]) != 0)
		{
		return (i);
		}
		return (-1);
}

