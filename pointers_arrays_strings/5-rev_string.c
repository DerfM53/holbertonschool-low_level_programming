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
	char *start = s;
	char temp;

while (*end != '\0')
{
	end++;
}
end--;
	while (start < end)
	{
	temp = *start;
	*start = *end;
	*end = temp;

	start++;
	end--;
}
}
