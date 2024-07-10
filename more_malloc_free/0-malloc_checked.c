#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - Alloue de la mémoire en utilisant malloc.
 * @b: Nombre d'octets à allouer.
 *
 * Return: Pointeur vers la méoire allouée
 * Termine le programme avec le statut 98 en cas d'échec de malloc
 */

void *malloc_checked(unsigned int b)
{
	int *memory = malloc(b * sizeof(int));

	if (b <= 0)
	{
	exit(98);
	}
	if (memory == NULL)
	{
	exit(98);
	}
	return (memory);
}
