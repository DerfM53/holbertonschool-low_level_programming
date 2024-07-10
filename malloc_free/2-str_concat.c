#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatène deux chaînes de caractères
 * @s1: Première chaîne
 * @s2: Deuxième chaîne
 *
 * Return: Pointeur vers la nouvelle chaîne de caractères concaténée
 * NULL si l'allocation de mémoire échoue
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len1] != '\0')
	len1++;

	while (s2[len2] != '\0')
	len2++;

	new_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (new_str == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	new_str[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
	new_str[i] = s2[j];

	new_str[i] = '\0';

	return (new_str);
}
