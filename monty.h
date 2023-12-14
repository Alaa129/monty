#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - stack_s
 * @n: int
 * @prev: points
 * @next: points
 *
 * Description: doubly linked list
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_b;
/**
 * struct test_s - variables
 * @arg: va
 * @file: pointer
 * @content: line
 * @lifi: change
 * Description: carries
 */
typedef struct test_s
{
    char *arg;
    FILE *file;
    char *content;
    int lifi;
}  test_t;
extern test_t test;

void s_push(stack_b **head, unsigned int line_co);
void s_pall(stack_b **head, unsigned int line_co);
void delete_stack(stack_b *head);
void inc_node(stack_b **head, int n);
void in_queue(stack_b **head, int n);
#endif
