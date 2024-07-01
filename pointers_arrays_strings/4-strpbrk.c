#include "main.h"
/**
 *_strpbrk - finds the first occurrence of any character in `accept` in `s`
 * @s: the string to search through
 * @accept: the string containing characters to search for
 *
 * Return: pointer to the first occurrence in `s` that matches any character
 *         in `accept`, or NULL if no match is found
 *
 */
char *_strpbrk(char *s, char *accept)
{
	char *s_ptr = s;

	while (*s_ptr != '\0')
	{
	char *a_ptr = accept;

	while (*a_ptr != '\0')
	{
		if (*s_ptr == *a_ptr)
	{
		return (s_ptr);
	}
		a_ptr++;
	}

	s_ptr++;
	}

	return (0);
}
