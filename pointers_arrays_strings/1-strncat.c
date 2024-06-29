#include "main.h"
/**
 **_strncat - concatene deux chaines de
 * caracteres ensemble
 *
 * @dest: pointeur vers une chaine de caracteres.
 * @src: pointeur vers une autre chaine de carctÃres
 * @n: nombre de caratere definis.
 *
 * Return: dest.
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;
while (dest[a] != '\0')
	{
	a++;
	}
while (b < n && src[b] != '\0')
	{
	dest[a + b] = src[b];
	b++;
	}
dest[a + b] = '\0';
return (dest);
}
