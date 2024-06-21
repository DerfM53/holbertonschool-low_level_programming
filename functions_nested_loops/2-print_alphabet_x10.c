#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - Affiche l'alphabet en minuscule 10 fois.
 *
 * Description:
 * Cette fonction affiche l'alphabet en minuscule de 'a' à 'z'
 * 10fois de suite en utilisant la fonction print_alphabet a chaque itération.
 * Elle utilise la fonction _putchar pour afficher une nouvelle ligne.
 *
 * Return:
 * Cette fonction ne return rien si l'exécution est réussi
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
		_putchar(letter);
		}
		_putchar('\n');
	}
}
