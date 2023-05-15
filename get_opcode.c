#include "monty.h"
/**
 * get_opcode - function that gets an opcode function
 * @op: the opcode
 * @line_number: line number of the monty file
 * Return: function that matches the opcode
 */
void (*get_opcode(char *op, int line_number))(stack_t **stack, unsigned int)
{
	int i = 0;
	char *token = NULL;

	instruction_t ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"nop", _nop},
		{NULL, NULL},
	};

	token = strtok(op, " \t");
	for (; ops[i].opcode != NULL; i++)
	{
		if (strcmp(ops[i].opcode, token) == 0)
			return (ops[i].f);
	}
	dprintf(STDERR_FILENO, "L%u: unknown instruction %s\n", line_number, op);
	exit(EXIT_FAILURE);
}
