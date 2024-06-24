#include "main.h"
/**
 * more_numbers - imprime les chiifres de 0 a 14
 * sur 10 lignes
 *
 * n : le chiffres unitaires affich√
 * ligne : le nombre de ligne©
 */

void more_numbers(void)
{
int n, ligne;

for (ligne = 0; ligne < 10; ligne++)
{
	for (n = 0; n < 15; n++)
	{
	if (n > 9)
	{
	 _putchar(n / 10 + '0');
	}
	_putchar(n % 10 + '0');
	}
	_putchar('\n');
}
}
