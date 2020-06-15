#include "sort.h"
void sorted_insert(listint_t **head, listint_t *new);

/**
 * insertion_sort_list - insertion sorting algorithm.
 * @list: Doubly linked list
 *
 * Return: nothing
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *mov, *sw, *temp;

	if (list == NULL || *list == NULL)
		return;

	for (mov = *list; mov->next != NULL;)
	{
		sw = mov->next;
		if (mov->n > sw->n)
		{
			for (temp = mov; (temp != NULL) && (temp->n > sw->n); temp = sw->prev)
			{
				temp->next = sw->next;
				if (temp->next != NULL)
					temp->next->prev = temp;
				sw->prev = temp->prev;
				if (sw->prev != NULL)
					sw->prev->next = sw;
				else
					*list = sw;
				temp->prev = sw;
				sw->next = temp;
				print_list(*list);
			}
			continue;
		}
		mov = mov->next;
	}
}
