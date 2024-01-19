#include "monty.h"

/**
 * pall - prints all the elements of the stack list
 * @stack: a pointer to a pointer to a stack
 * @line_number: line  where opcode is encountered
 * Return: nothing
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	(void)line_number;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
