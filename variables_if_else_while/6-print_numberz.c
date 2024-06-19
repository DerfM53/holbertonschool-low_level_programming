#include <stdio.h>

/**
*main - Entry point
*
*Description: programm affiche toute les lettres de l'alphabet
*en minuscule
*
*Return: Always 0 (Success)
*/
int main(void)
{
int c;
for (c = 0; c <= 9; ++c)
{
putchar(c + '0');
}
putchar('\n');
return (0);
}
