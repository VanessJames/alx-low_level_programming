#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @l: function parameter
 *
 * Return: L
 */

int print_last_digit(int l)
{
	int r;

	r = l % 10;
	if (l < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}
