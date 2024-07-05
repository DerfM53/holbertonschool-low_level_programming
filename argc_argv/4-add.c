#include <stdio.h>
/*
 *
 *
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
	}
	else
	{
	printf("ERREUR\n");
	return (1);
	}
}
