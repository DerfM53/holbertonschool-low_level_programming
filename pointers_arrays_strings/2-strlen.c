#include "main.h"
/**
 *  _strlen - Calcule la longueur d'une chaîne de caractères.
 *
 * @s: Pointeur vers la chaîne de caractères à mesurer.
 *
 * Description :
 * Cette fonction parcourt la chaîne pointée par @s jusqa rencontrer
 * caractère nul ('\0'), comptant ainsi le nombre de caractères avant la fi
 * de la chaîne
 *
 * Return: Le nombre de caractères dans la chaîne pointée par.
 *
 */

int _strlen(char *s)
{
	int lenght = 0;

	for (; *s != '\0'; s++)
	{
		lenght++;
	}
	return (lenght);
}
