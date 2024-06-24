#include "main.h"
/**
 *  _isupper - détermine si le caractère est une majuscu
 * @c: le caractèrea vériier
 *
 * Return: 1 si c est une majuscule, 0 sinon
 *
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
}
