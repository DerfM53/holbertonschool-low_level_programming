#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - Crée un tableau de caractères et l'initialise
 * @size: La taille du tableau à cré
 * @c: Le caractère avec lequel initialiser le tablea
 *
 * Description: Cette fonction alloue de la mémoire pour un tableau d
 * caractères de taille `size` et initialise chaque cas
 * avec le caractère `c`
 * Si `size` est 0 ou si l'allocation de mémoire échoue, elle retourne `NULL`
 *
 * Return: Un pointeur vers le tableau créé et initialisé, ou `NU
 * en cas d'erreur
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}
	if (array == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}
	return (array);
}
