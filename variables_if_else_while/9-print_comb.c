#include <stdio.h>
/**
*main - Entry point
*
*Description: programm affiche les nombre de 0 a 9
*
*
*Return: Always 0 (Success)
*/
int main(void)
{
int c;
for (c = '0'; c <= '9'; ++c)
{
putchar(c);
if (c == '9')
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
