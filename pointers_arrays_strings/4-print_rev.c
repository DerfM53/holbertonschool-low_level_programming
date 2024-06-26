#include <stdio.h>
#include "main.h"
/**
 * print_rev - Affiche une chaîne de caractè dans l'ordre invers�es
 * et retour a la ligne
 *
 * @s: Pointeur vers la chaîne de caractre.�
 *
 */
void print_rev(char *s)
{
	char *end = s;

while (*end != '\0')
{
	end++;
}
end--;
	for (; end >= s; end--)
	{
	_putchar(*end);
	}
_putchar('\n');
}
