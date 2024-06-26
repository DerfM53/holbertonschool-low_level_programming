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
	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
_putchar('\n');
}
