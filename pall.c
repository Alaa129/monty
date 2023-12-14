#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void s_pall(stack_b **head, unsigned int counter)
{
	stack_b *ssss;
	(void)counter;

	ssss = *head;
	if (ssss == NULL)
		return;
	while (ssss)
	{
		printf("%d\n", ssss->n);
		ssss = ssss->next;
	}
}
