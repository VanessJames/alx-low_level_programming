#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index of a listint_t linked list
 * @head: pointer to a pointer to the first element in the linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 on  success, -1 on failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	prev = NULL;


	for (i = 0; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (i != index)
		return (-1);


	if (prev == NULL)
		*head = current->next;
	else
		prev->next = current->next;


	free(current);

	return (1);
}
