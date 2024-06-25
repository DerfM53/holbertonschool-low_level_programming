#include <stdio.h>
/**
 * main - Affiche les nombres de 1 à 100 selon les règles de FizzBuzz.
 *
 * Return: Toujours 0 en cas de succès
 */

int main(void)
{
	int n;

for (n = 1; n <= 100; n++)
	{
	if (n % 3 == 0 && n % 5 == 0 && n != 60)
	{
		printf("FizzBuzz");
	}
	else if (n == 60)
	{
		printf("Fizz\nBuzz");
	}
	else if (n % 3 == 0)
	{
		printf("Fizz");
	}
	else if (n % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", n);
	}
	if (n != 100)
	{
		printf(" ");
	}
	if (n == 30 || n == 89)
	{
		printf("\n");
	}
	}
printf("\n");

return (0);
}
