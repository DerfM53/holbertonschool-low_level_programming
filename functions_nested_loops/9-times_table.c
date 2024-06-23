#include "main.h"

/**
 * times_table - affiche la table des * jusqu'a
 * fois 9.
 *
 * _putchar affiche le resultat
 *
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
	product = i * j;

	if (product < 10)
	{
		_putchar('0' + product);
		if (j != 9)
		{
		_putchar(',');
		_putchar(' '); 
		_putchar(' ');
		}
	}
	else
	{
	_putchar((product / 10) + '0');
	_putchar((product % 10) + '0');
	if (j != 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	}
	_putchar('\n');
}
}
