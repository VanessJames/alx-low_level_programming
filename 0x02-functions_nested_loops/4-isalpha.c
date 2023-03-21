#include "main.h"
/**
 * _isalpha - checks for lower or uppercase characters
 *
 * @c: parameter to be checked
 *
 * Return: Always 1 if c is a letter, lower or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
