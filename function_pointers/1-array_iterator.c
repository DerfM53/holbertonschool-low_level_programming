#include <stdio.h>
/**
* array_iterator - Fonction qui exécute une fonction donnée sur chue
* élément d'un table
* @array: Le tableau d'entiers
* @size: La taille du tableau
* @action: Un pointeur vers la fonction a exécuter pour chaqu
* element
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

