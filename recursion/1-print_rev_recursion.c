#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 *
 * Description: This function prints a string in reverse order
 * by using recursion. It first recursively reaches the end
 * of the string and then prints each character while unwinding
 * the recursive calls.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
