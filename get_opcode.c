#include "monty.h"
/**
 * get_opcode - get function
 * @opcode: the opcode
 * Return: function that matches the opcode
 */
void (*get_opcode(char *opcode, unsigned int line_number))(stack_t **stack)
{
	/*int i = 0;
	char *token = NULL;

	instruction_t ops[] = {
		{'push', _push},
		{'pall', _pall},
		{'pint', _pint},
		{'pop', _pop},
		{'swap', _swap},
		{'add', _add},
		{'nop', _nop},
		{'\0', NULL},
	};

	token = strtok(opcode, " \t");
	for (; ops[i].opcode != '\0'; i++)
	{
		if (strcmp(ops[i].opcode, token == 0))
			return (ops[i].f);
	}
	dprintf(STDERR_FILENO, "L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);*/
}
