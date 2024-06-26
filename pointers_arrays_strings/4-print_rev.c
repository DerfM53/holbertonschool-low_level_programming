#include <stdio.h>
#include "main.h"
/**
 * _print_rev - Affiche une chaÃ®ne de caractÃ¨redans l'ordre inversÃes
 * et retour a la ligne
 *
 * @s: Pointeur vers la chaÃ®ne de caractre.Ã
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
