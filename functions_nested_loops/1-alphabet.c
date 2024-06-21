#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - affiche l'alphabet en minuscule
 *
 * Description: la fonction print_alphabet
 * affiche les lettres de l'alphabet en
 * minuscule
 *
 * Elle utilise la fonction putchar pour l'affichage.
 *
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
{
	putchar(c);
}
putchar('\n');
}
