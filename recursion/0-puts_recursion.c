#include "main.h"
/**
 * _puts_recersion - fonction qui imprime une chaine
 * de caract√res puis un retour a la ligne.
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
