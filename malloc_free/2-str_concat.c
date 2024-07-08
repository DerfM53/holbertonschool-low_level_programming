#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - Concatène deux chaînes de cara
 * @s1: Première chaî
 * @s2: Deuxième chaîne à concaténer à
 *
 * Return: Pointeur vers la nouvelle chaîne d
 * caractères concatén
 * NULL si l'allocation de mémoire écue
 */
char *str_concat(char *s1, char *s2)
{
size_t len1 = strlen(s1);
size_t len2 = strlen(s2);
char *NewString = malloc(len1 + len2 + 1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (NewString == NULL)
		return (NULL);

	strcpy(NewString, s1);
	strcat(NewString, s2);

return (NewString);
}
