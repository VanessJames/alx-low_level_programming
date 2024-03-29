#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: character to initialize the array with
 *
 * Return: pointer to the array, or NULL if size is 0 or malloc fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);

	for (i = 0; i < size; i++)

		str[i] = c;

	return (str);

}
