#include <stdio.h>

/**
*main - Entry point
*
*Description: programm affiche toute les lettres de l'alphabet
*en minuscule et en majuscule avec un retour a la ligne
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
for (c = 'A'; c <= 'Z'; ++c)
{
putchar(c);
}
putchar('\n');
return (0);
}
