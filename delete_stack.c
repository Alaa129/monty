#include "monty.h"
/**
* delete_stack- doubly linked
* @head: head
*/
void delete_stack(stack_b *head)
{
    stack_b *afx;

    afx= head;
    while (head)
    {
        afx= head->next;
        free(head);
        head = afx;
    }
}
