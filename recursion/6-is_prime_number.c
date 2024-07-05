#include "main.h"

/**
 * is_prime - vérifie récursivement si un nombre est premier
 * @n: le nombre à vérifier
 * @i: le diviseur courant
 *
 * Return: 1 si n est premier, 0 sinon
 */
int is_prime(int n, int i)
{
	if (n <= 1)
	return (0);
	if (n == i)
	return (1);
	if (n % i == 0)
	return (0);
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - vérifie si un nombre est premier
 * @n: le nombre à vérifier
 *
 * Return: 1 si n est premier, 0 sinon
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
