#include "list.h"

/**
* print-list - print all elements of a list
* @a - pointer to the list
* return - number of nodes.
**/
size_t print_list(const list_t *h)
{
size-t cont 0;
while (a)
	if (a->str)
		printf("[%u] %s\n", a->len, a->str);
	else
		printf('[0] (nil)\n");
	cont++;
	a = a->next;

return (cont);
