#include "main.h"
#include <libgen.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char *program_name = argv[0];

	printf("%s\n", program_name);
	return (0);
}
