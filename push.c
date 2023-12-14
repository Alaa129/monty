#include "monty.h"
/**
 * s_push - add
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void s_push(stack_b **head, unsigned int line_co)
{
	int s, i = 0, u_flag = 0;

	if (test.arg)
	{
		if (test.arg[0] == '-')
			i++;
		for (; test.arg[i] != '\0'; i++)
		{
			if (test.arg[i] > 57 || test.arg[i] < 48)
				u_flag = 1; }
		if (u_flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_co);
			fclose(test.file);
			free(test.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_co);
		fclose(test.file);
		free(test.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	s = atoi(test.arg);

	if (test.lifi == 0)
		addnode(head, s);
	else
		addqueue(head, s);
}
