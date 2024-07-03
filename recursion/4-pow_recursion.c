#include "main.h"
/**
 * _pow_recursion - Calcule la puissance d'un nombre.
 * @x: La base.
 * @y: L'exposant.
 *
 * Return: Le résultat de base éle a la puissance de exponent.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
