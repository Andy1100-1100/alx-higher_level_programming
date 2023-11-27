#include <stdlib.h>
#include "lists.h"
/**
 * check_cycle - checks if single-link list contains Cycle
 * @list: single-linked list
 * Return: 1 if there is a cycle or  0 if no cycle.
 */
int check_cycle(listint_t *list)
{
	listint_t *torpid, *speedy;

	if (list == NULL || list->next == NULL)
		return (0);

	torpid = list->next;
	speedy = list->next->next;

	while (torpid && speedy && speedy->next)
	{
		if (torpid == speedy)
			return (1);

		torpid = torpid->next;
		speedy = speedy->next->next;
	}

	return (0);
}
