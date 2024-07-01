#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to destination buffer
 * @src: pointer to source buffer
 * @n: number of bytes to copy
 *
 * Return: pointer to destination buffer
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
while (n--)
	{
	*p++ = *src++;
	}
return (dest);
}
