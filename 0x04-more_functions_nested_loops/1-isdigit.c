#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: Integer holding the character
 * Return: 1 - Digit  otherwise 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
return (0);
}
