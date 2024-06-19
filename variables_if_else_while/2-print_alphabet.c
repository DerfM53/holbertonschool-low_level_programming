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
char c;
for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}
