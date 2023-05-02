#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to the first element in the linked list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *temp;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);
		if (temp <= current)
		{
			*h = NULL;
			break;
		}
	}

	*h = NULL;
	return (count);
}
