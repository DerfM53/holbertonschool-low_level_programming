#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Duplicate a string using malloc
 * @str: The string to duplicate
 *
 * Return: Pointer to the newly allocated duplicate string,
 * or NULL if str is NULL or if malloc fails
 */
char *_strdup(char *str)
{
	char *dup;
	int c;

if (str == NULL)
	{
	return (NULL);
	}

	dup = malloc(strlen(str) + 1);
if (dup == NULL)
	{
	return (NULL);
	}
for (c = 0 ; str[c] != '\0'; c++)
	{
	dup[c] = str[c];
	}
	dup[c] = '\0';
return (dup);
}
