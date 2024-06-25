#include "main.h"
/**
 * print_diagonal - Dessine une diagonale dans le terminal
 * @n: Le nombre de fois que le caract√re \ doit √tre imprim√
 *
 * Return: void
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
