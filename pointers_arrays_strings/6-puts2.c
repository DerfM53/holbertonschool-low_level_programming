#include <stdio.h>
#include "main.h"
/**
 * puts2 - Affiche une chaîne de caractères suivie d'un reto a la ligne.
 *
 * @str: Pointeur vers la chaîne de caractèr a afficher
 *
 */
void puts2(char *str)
{
while (*str != '\0')
	{
	_putchar(*str);
	str = str + 2;
	}
_putchar('\n');
}
