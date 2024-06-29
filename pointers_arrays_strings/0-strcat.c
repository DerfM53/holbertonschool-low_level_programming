#include "main.h"
#include <stdio.h>
/**
 * _strcat - concat�ne deux chaines de
 * caract�res ensemble
 *
 * @dest: pointeur vers une chaine de caracteres.
 * @src: pointeur vers une autre chaine de carct�res.
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;
while (dest[a] != '\0')
	{
	a++;
	}
while (src[b] != '\0')
	{
	dest[a + b] = src[b];
	b++;
	}
dest[a + b] = '\0';
return (dest);
}
