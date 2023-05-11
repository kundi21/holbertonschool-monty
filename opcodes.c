#include "monty.h"
/**
 * nop - opcode nop doesn’t do anything
 * @stack:
 * @line_number:
 */
void _nop(stack_t **stack, unsigned int line_number)
{
	(void) stack, (void) line_number;
}

void _push(stack_t **stack, unsigned int line_number)
{
	int num;
	num = atoi(strtok(NULL, ' \t'));
	stack_t *node;


}

int check_num(char *num)
{
	int length = strlen(num);
	int i = 0;
	int check;

	if (!num)
		return (0);
	for (; i < length; i++)
	{
		if (check = isdigit(num[i]))
			if (check = 0)
				return (check);
			else
				check = 1;
	}
	return (check);
}
