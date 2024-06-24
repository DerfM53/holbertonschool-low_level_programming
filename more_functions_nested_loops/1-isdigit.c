#include "main.h"
/**
* _isdigit - détermine si le caractère est  chiffre
* @c: le caractèr a vérifie
*
* Return: 1 si c est un chiffre, 0 si non
*
*/

int _isdigit(int c)

{
if (c >= '0' && c <= '9')
{
	return (1);
}
else
{
	return (0);
}
}
