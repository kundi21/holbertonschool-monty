#include "monty.h"
/**
 * get_opcode - get function
 * @opcode: the opcode
 * Return: function that matches the opcode
 */
int (*get_opcode(char *opcode))(stack_t **stack, unsigned int line_number)
{
    int i = 0;
	
	/*instruction_t ops[] = {

		{'push', _push},
		{'pall', _pall},
		{'pint', _pint},
		{'pop', _pop},
		{'swap', _swap},
		{'add', _add},
        {'nop', _nop},
		{'\0', NULL},
	};
    for (; ops[i].opcode != '\0'; i++)
    {
        if (ops[i].opcode == opcode)
            return (ops[i].f);
    }*/
}