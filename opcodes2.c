#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @stack: double linked list
 * @line_number: line number of the monty file
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	int value = 0;

	if (!(*stack) || ((*stack)->next == NULL))
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	 value = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = value;
}
