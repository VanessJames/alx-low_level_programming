#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase 10x
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char f;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (f = 'a' ; f <= 'z' ; f++)
			_putchar(f);
		_putchar('\n');
	}
}
