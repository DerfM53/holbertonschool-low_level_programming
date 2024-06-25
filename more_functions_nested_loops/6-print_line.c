#include "main.h"

/**
 * print_line - Dessine une ligne dans le terminal
 * @n: Le nombre de fois que le caractère _ doit être imprimé
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
