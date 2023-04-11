#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicate string,
 * or NULL if str is NULL or malloc fails
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	unsigned int len;
	len = strlen(str);

	char *dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str);
	return (dup);
}
