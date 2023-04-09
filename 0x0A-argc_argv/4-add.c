#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit((unsigned char) argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
