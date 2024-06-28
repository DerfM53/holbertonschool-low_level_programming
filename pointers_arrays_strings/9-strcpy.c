#include "main.h"
/**
 * *_strcpy - copie une chaine de caractere pour la mettre
 *  dans une autre.
 * Return: retourne le contenu de dest
 * @dest: pointeur return:
 * @src: pointeur arrivÃ
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
dest[i] = '\0';
return (dest);
}
