#include "main.h"
/**
 *  _strstr - Locate a substring in a string
 * @haystack: The main string to search within
 * @needle: The substring to search for
 *
 * Description: This function finds the first occurrence of the substring
 * needle in the string haystack. The terminating null bytes ('\0') are not
 * compared. Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 *
 * Return: Pointer to the beginning of the located substring, or NULL if
 *         the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *p_haystack = haystack;
	char *p_needle = needle;

	while (*p_haystack != '\0')
	{
	char *start = p_haystack;

	while (*p_needle != '\0' && *p_haystack == *p_needle)
	{
		p_haystack++;
		p_needle++;
	}
	if (*p_needle == '\0')
	{
		return (start);
	}
	p_haystack = start + 1;
	p_needle = needle;
	}
	return (0);
}
