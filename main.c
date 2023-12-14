#include "monty.h"

test_t bus = {NULL, NULL, NULL, 0};
/**
* main - monty
* @argc: number
* @argv: monty
* Return: 0
*/
int main(int argc, char *argv[])
{
	char *cont;
	FILE *files;
	size_t size = 0;
	ssize_t get_line = 1;
	stack_b *in_stack = NULL;
	unsigned int nCounter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	files = fopen(argv[1], "r");
	test.file = files;
	if (!files)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (get_line > 0)
	{
		cont = NULL;
		get_line = getline(&cont, &size, files);
		bus.content = cont;
		nCounter++;
		if (get_line > 0)
		{
			execute(cont, &in_stack, nCounter, files);
		}
		free(cont);
	}
	delete_stack(in_stack);
	fclose(files);
return (0);
}
