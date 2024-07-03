#include "main.h"
/**
 *_strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Description: This function returns the length of a string
 * by using recursion. It counts each character until it reaches
 * the null terminator.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
