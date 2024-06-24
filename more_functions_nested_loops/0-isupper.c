#include "main.h"
/**
 * _isupper - détermine si le carctèr est
 * une majuscule
 *
 * si @c est majuscule return (1) sinon return (0)
 *
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
}
