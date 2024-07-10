#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings up to n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to include from s2.
 *
 * Return: Pointer to the newly allocated space in memory
 * with concatenated strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n > len2)
		n = len2;

	new_str = malloc((len1 + n + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		new_str[i] = s2[j];

	new_str[i] = '\0';

	return (new_str);
}
