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
	int j;


	for (i = 0 ; i <= 10 ; i++)
	for (j = 0 ; j <= 9 ; j++)
		printf("%-3d", i * j);
	printf("$\n");
}
