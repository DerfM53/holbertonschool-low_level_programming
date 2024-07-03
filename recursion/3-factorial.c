#include "main.h"
/**
 * factorial - Calcule la factorielle d'un nombre.
 * @n: Le nombre dont on veut calculer la factorielle.
 *
 * Description: Cette fonction utilise une approche récursive
 * pour calculer la factorielle d'un nombre. Si le nombre est
 * négatif, la fonction retourne -1 pour indiquer une erreur.
 * Si le nombre est 0, la fonction retourne 1 car 0! = 1.
 *
 * Return: La factorielle du nombre n. Retourne -1 si n est négatif.
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
