#include "monty.h"
/**
 * s_push - add
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void s_push(stack_b **head, unsigned int counter)
{
	int s, i = 0, u_flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				u_flag = 1; }
		if (u_flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	s = atoi(bus.arg);

	if (bus.lifi == 0)
		addnode(head, s);
	else
		addqueue(head, s);
}
