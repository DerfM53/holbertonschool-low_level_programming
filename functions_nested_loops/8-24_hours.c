#include "main.h"
/**
 * jack_bauer - affiche l'heure en format hh:mm
 * minutes par minutes de 00:00 Ã 23:59.
 *
 * utilise _putchar pour afficher le rÃsultat
 *
 */

void jack_bauer(void)
{
	int h, m;
	int tens_h, units_h, tens_m, units_m;

	for (h = 0; h < 24; h++)
	{
	tens_h = h / 10;
	units_h = h % 10;

	for (m = 0; m < 60; m++)
	{
	tens_m = m / 10;
	units_m = m % 10;

	_putchar('0' + tens_h);
	_putchar('0' + units_h);
	_putchar(':');
	_putchar('0' + tens_m);
	_putchar('0' + units_m);
	_putchar('\n');
	}
}
}
