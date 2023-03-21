#include "main.h"
/**
 * _abs - chesks absolute value
 *
 * @n: parameter to be checked
 *
 * Return: Always n
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
