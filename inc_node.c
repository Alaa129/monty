#include "monty.h"
/**
 * inc_node - add node
 * @head: head
 * @n: values
 * Return: no return
*/
void inc_node(stack_b **head, int n)
{

	stack_b *news_node, *afx;

	afx = *head;
	news_node = malloc(sizeof(stack_b));
	if (news_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (afx)
		afx->prev = news_node;
	news_node->n = n;
	news_node->next = *head;
	news_node->prev = NULL;
	*head = news_node;
}
