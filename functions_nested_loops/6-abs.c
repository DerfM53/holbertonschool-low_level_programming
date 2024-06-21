#include "main.h"

/**
 * _abs - calcule et retourne la valeur absolue
 * d'un nombre
 *
 * @n: le nombre a Ãvaluer
 *
 * Return: la valeur absolue de n
 */
int _abs(int n)
{
	if (n >= 0)
{
	return (n);
}
	else
{
	n = -n;
	return (n);
}
}
