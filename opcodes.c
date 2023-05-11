#include "monty.h"
/**
 * _push - pushes an element to the stack
 * @stack: double linked list
 * @line_number: line number of the monty file
 */
void _push(stack_t **stack, unsigned int line_number)
{
	char *value;

	value = strtok(NULL, " \t");
	if (check_num(value) == 0)
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack_t *node = NULL;

	node = malloc(sizeof(stack_t));
	if (!node)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (!(*stack))
	{
		node->n = atoi(value);
		node->next = NULL;
		node->prev = NULL;
	}
	else
	{
		node->n = atoi(value);
		node->next = *stack;
		node->prev = NULL;
		(*stack)->prev = node;
	}
	*stack = node;
}

/**
 * _pall - prints all the values on the stack, starting
 * from the top of the stack
 * @stack: double linked list
 * @line_number: line number of the monty file
 */
void _pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	if (*stack)
	{
		stack_t *aux = *stack;

		while (aux)
		{
			printf("%d\n", aux->n);
			aux = aux->next;
		}
	}
}

/**
 * _nop - opcode nop doesn’t do anything
 * @stack: double linked list
 * @line_number: line number of the monty file
 */
void _nop(stack_t **stack, unsigned int line_number)
{
	(void) stack, (void) line_number;
}
