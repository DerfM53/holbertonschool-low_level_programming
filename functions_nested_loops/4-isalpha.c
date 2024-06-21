#include "main.h"

/**
 *_isalpha - Vérife la présence de caractères minuscs ou maj
 * @c: Le caractère à vérifier
 *
 * Return: 1 si c est un caract�res, 0 sinon
 */
int _isalpha(int c)
	{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	return (1);
	}
	else
	{
return (0);
	}
}
