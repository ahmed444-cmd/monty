#include "monty.h"
/**
 * f_pstr - displays the strng starting at the top of the stck,
 * followed by a "\n"
 * @head: stck head
 * @counter: line_numb
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
