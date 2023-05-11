#include "monty.h"
/**
 * main - main
 * @argc: argument count
 * @argv: list of arguments
 * Return: 0 if success, EXIT_FAILURE otherwise
 */
int main(int argc, char *argv[])
{
	int i = 0;
	unsigned int line_num = 1;
	char *monty_commands = NULL, **token = NULL;
	stack_t *stack_h = NULL;
	void (*opcode)(stack_t **stack, unsigned int line_number);

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	monty_commands = openfile(argv[1]);
	token = tokenize(monty_commands, '\n');
	while (token[i])
	{
		if (token[i][0])
		{
			opcode = get_opcode(token[i], line_num);
			opcode(&stack_h, line_num);
		}
		line_num++;
		i++;
	}
	return (0);
}
