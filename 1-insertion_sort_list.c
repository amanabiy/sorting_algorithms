#include "sort.h"

void swap_ptr(listint_t *ptr, lisint_t *ptr2)
{
	listint_t *temp = *ptr;
	ptr = ptr2;
	ptr2 = temp;
}

void swap_node(listint_t *ptr, listint_t *ptr2)
{
        listint_t temp = ptr->prev;
	(*ptr)->next = (*ptr2)->next;
	(*ptr)->prev = ptr2;
	(*ptr2)->prev = temp;
	(*ptr2)->next = ptr;
}

/**
 * insertion_sort_list - sorts a doubly linkded list of integers in ascending
 * @list: the list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	int i, key, j;
	listint_t *temp, *temp2, *temp3;
	listint_t *prev, *next;

	temp = *list;
	for (i = 1; temp != NULL; i++)
	{
		key = temp->n;
		j = i - 1;
		while (j >= 0 && key < temp->n)
		{
			temp2 = temp->prev;
			swap(temp, temp2);
			temp = temp->prev;
		}
		temp = temp->next;
	}
}
