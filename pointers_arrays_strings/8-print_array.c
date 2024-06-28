#include "main.h"
#include <stdio.h>
/**
 * print_array - affiche les entiers des ÃÃlÃments d'un tabau
 *
 * @a: pointeur vers tableau
 * @n: nombre d'eÃeÃments du tab
 *
 */
void print_array(int *a, int n)
{
for (int i = 0; i < n; i++)
	{
	if (i <= 3)
		{
		printf("%d, ", a[i]);
		}
	else
		{
		printf("%d", a[i]);
		}
	}
printf("\n");
}
