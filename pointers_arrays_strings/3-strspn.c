#include "main.h"

/**
 * _strspn - description de la fonction
 * @s: chaîne de caractères à examiner
 * @accept: chaîne de caractères contenant les caractères autorisés
 *
 * Return: nombre de caractères initiaux de s qui sont dans accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
	char *a = accept;

	while (*a != '\0')
	{
	if (*s == *a)
	{
	i++;
		break;
	}
	a++;
	}
	if (*a == '\0')
		break;
	s++;
	}
	return (i);
}
