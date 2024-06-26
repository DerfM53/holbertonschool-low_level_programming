#include <stdio.h>
#include "main.h"
/**
 * _puts - Affiche une chaîne de caractères suivie d'un reto a la ligne.
 *
 * @str: Pointeur vers la chaîne de caractèr a afficher
 *
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
_putchar('\n');
}
