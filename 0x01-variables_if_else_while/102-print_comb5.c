#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			int n1 = i / 10;
			int n2 = i % 10;
			int n3 = j / 10;
			int n4 = j % 10;


			putchar(n1 + '0');
			putchar(n2 + '0');
			putchar(' ');
			putchar(n3 + '0');
			putchar(n4 + '0');
			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
