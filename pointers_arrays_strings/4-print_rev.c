#include <stdio.h>
#include "main.h"
/**
 * _print_rev - Affiche une chaîne de caractèredans l'ordre invers�es
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
