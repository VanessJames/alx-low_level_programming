#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char digit;
	char str;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	for (str = 'a'; str <= 'f'; str++)
	putchar(str);
	putchar('\n');
	return (0);
}
