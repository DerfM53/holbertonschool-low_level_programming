#include <stdio.h>
#include "main.h"
/**
 * puts_half - Affich la moiti� d une chaîne de caractè
 * suivie d'un reto a la ligne.
 *
 * @str: Pointeur vers la chaîne de caractèr a afficher
 *
 */
void puts_half(char *str)
{
	int i = 0;
	int n;

while (str[i] != '\0')
	{
	i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
	n = (i - 1) / 2 + 1;
	}
while (str[n] != '\0')
	{
	_putchar(str[n]);
	n++;
	}
_putchar('\n');
}
