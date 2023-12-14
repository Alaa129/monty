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
/**
 * struct instruct_s - opcode
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruct_s
{
	char *opcode;
	void (*f)(stack_b **stack, unsigned int line_number);
} instruct_b;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void s_push(stack_b **head, unsigned int line_co);
void s_pall(stack_b **head, unsigned int line_co);
void s_pint(stack_b **head, unsigned int line_co);
int execute(char *cont, stack_b **head, unsigned int counter, FILE *file);
void free_stack(stack_b *head);
void s_pop(stack_b **head, unsigned int counter);
void f_swap(stack_b **head, unsigned int counter);
void s_add(stack_b **head, unsigned int counter);
void s_nop(stack_b **head, unsigned int counter);
void s_sub(stack_b **head, unsigned int counter);
void s_div(stack_b **head, unsigned int counter);
void s_mul(stack_b **head, unsigned int counter);
void s_mod(stack_b **head, unsigned int counter);
void s_pchar(stack_b **head, unsigned int counter);
void s_pstr(stack_b **head, unsigned int counter);
void s_rotl(stack_b **head, unsigned int counter);
void s_rotr(stack_b **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_b **head, int n);
void addqueue(stack_b **head, int n);
void s_queue(stack_b **head, unsigned int counter);
void s_stack(stack_b **head, unsigned int counter);
#endif
