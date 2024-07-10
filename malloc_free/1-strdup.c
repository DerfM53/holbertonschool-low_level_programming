#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Retourne un pointeur vers un nouvel espace alloué en mémoire,
 * qui contient une copie de la chaîne donnée en paramètre.
 * @str: La chaîne à dupliquer.
 *
 * Return: Un pointeur vers la chaîne dupliquée, ou NULL si str est NULL
 * ou si une mémoire insuffisante était disponible.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, length;

	if (str == NULL)
	{
		return (NULL);
	}
	for (length = 0; str[length] != '\0'; length++)
	{
	}
		duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}
		duplicate[length] = '\0';
	return (duplicate);
}
