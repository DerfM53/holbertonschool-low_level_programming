#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to search for
 *
 * Return: pointer to the first occurrence of 'c' in 's', or NULL if not found
 *
 */
char *_strchr(char *s, char c)
{

	while (*s++)
	{
	if (*s == c)
		return (s);

	if (!*s)
		return (0);
	}
	return (s);
}
