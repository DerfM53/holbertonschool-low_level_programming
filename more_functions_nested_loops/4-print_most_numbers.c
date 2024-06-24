#include "main.h"
/**
 * print_most_numbers - imprime le caract√re de0 a 9
 * sauf le 2 et le 4
 *
 * _putchar: imprime de resultat
 *
 * @c: variable d√terminer
 *
 */

void print_most_numbers(void)
{
	char c;

	 for (c = 0; c <= 9; c++)
{
	if (c != 2 && c != 4)
{
	_putchar(c + '0');
}
}
	_putchar('\n');
}
