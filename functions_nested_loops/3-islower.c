#include "main.h"

/**
 * _islower - Vérife la présence de caractères minuscules
 * @c: Le caractère à vérifier
 *
 * Return: 1 si c est une minuscule, 0 sinon
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
