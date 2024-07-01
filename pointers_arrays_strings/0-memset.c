#include "main.h"
/**
 * *_memset - fonction qui remplit la mémoire avec une constante
 * @s: pointeur vers la zone de mémoire à remplir
 * @b: la valeur à utiliser pour remplir la mémoire
 * @n: le nombre de bytes à remplir
 * Return: un pointeur vers la zone de mémoire remplie (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
while (n--)
	{
	*p++ = b;
	}
return (s);
}
