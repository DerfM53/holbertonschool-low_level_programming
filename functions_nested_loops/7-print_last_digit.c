#include "main.h"
/**
 * print_last_digit - calcule le dernier
 * chiffre d'un nombre
 *
 *@n: le nombre
 *
 *_putchar : imprime le dernier chiffre
 *
 * Return: renvoi le dernier chiffre du nombre
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
	last_digit = -last_digit;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
