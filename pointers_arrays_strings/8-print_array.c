#include "main.h"
#include <stdio.h>
/**
 * print_array - affiche les entiers des ��l�ments d'un tabau
 *
 * @a: pointeur vers tableau
 * @n: nombre d'e�e�ments du tab
 *
 */
void print_array(int *a, int n)
{
	int i;

for (i = 0; i < n; i++)
	{
	if (i < n - 1)
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
