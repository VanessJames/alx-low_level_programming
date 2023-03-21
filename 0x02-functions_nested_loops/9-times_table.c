#include "main.h"
#include <stdio.h>
/**
 * times_table - multiples of 9
 *
 * Return: Always 0
 */

void times_table(void)
{
	int i;


	for (i = 0 ; i <= 10 ; i++)
		printf("9 x %d = %d\n", i, 9 * i);
}
