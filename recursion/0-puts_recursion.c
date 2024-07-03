#include "main.h"
/**
 * _puts_recursion - Fonction qui imprime une chaîne
 * de caractères puis un retou la ligne.
 * @s: Pointeur vers la chaîne de caractèr imprimer.
 *
 * Description: Cette fonction imprime chaque caractère de la chaîne
 * pointée par 's' de manière récursive. Lorsqu'elle atte
 * le caractère nul ('\0'), elle imprime un retou la ligne
 * et termine la récursio
 *
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
