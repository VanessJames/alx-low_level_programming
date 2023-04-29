#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to the head of the list
 *
 * Description: This function frees a linked list starting at the head.
 * Each node's 'str' member is also freed.
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *next = head->next;

		free(head->str);
		free(head);
		head = next;
	}
}
