#include "monty.h"

/**
 * in_queue - add node
 * @n: new
 * @head: head
 * Return: no return
*/
void in_queue(stack_b **head, int n)
{
    stack_b *news_node, *afx;

    afx= *head;
    news_node= malloc(sizeof(stack_b));
    if (news_node== NULL)
    {
        printf("Error\n");
    }
    news_node->n = n;
    news_node->next = NULL;
    if (afx)
    {
        while (afx->next)
            afx= afx->next;
    }
    if (!afx)
    {
        *head = news_node;
        news_node->prev = NULL;
    }
    else
    {
        afx->next = news_node;
        news_node->prev = afx;
    }
}
