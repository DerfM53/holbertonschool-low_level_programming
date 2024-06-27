#include "main.h"
#include <stdio.h>
/**
 * print_array - affiche les entiers des ��l�ments d'un tabau
 *
 * @a: pointeur vers tableau
 * @n: nombre d'�l�ments du table
 *
 */
void print_array(int *a, int n)
{
for (int i = 0; i < n; i++)
	{
	if (i <= -1)
		{
		printf("%d", a[i]);
		}
	else
		{
		printf("%d ,", a[i]);
		}
	}
printf("\n");
}
