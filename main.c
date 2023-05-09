#include "monty.h"
/**
 * main -
 * @argc: argument count
 * @argv: list of arguments
 * Return: 0 if success, EXIT_FAILURE otherwise
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	unsigned int line_number = 1;
	char *monty_commands = NULL;
	stack_t *stack_h = NULL;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	monty_commands = openfile(argv[1]);
	return (0);
}
