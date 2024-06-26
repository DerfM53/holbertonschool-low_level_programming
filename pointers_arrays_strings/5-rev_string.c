#include <stdio.h>
#include "main.h"
/**
 * print_rev - Affiche une chaÃ®ne de caractÃ¨ dans l'ordre inversÃes
 * et retour a la ligne
 *
 * @s: Pointeur vers la chaÃ®ne de caractre.Ã
 *
 */
void rev_string(char *s)
{
	char *end = s;
	int temporaire;

while (*end != '\0')
{
	end++;
}
end--;
	for (; end >= s; end--)
	{
	s = end;
	}
