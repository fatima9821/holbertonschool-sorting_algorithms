#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                      in ascending order using Insertion sort algorithm.
 * @list: A pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = *list;

	while (current)
	{
		while (current->next && (current->n > current->next->n))
		{
			tmp = current->next;

			current->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = current;

			tmp->prev = current->prev;
			if (current->prev)
				current->prev->next = tmp;
			else
				*list = tmp;

			tmp->next = current;
			current->prev = tmp;

			print_list(*list);
		}

		current = current->next;
	}
}

