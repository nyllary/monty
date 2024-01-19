#include "monty.h"

/**
 * push - creates a doubly linked list reping a stack
 * @stack: a pointer to a pointer to the struck
 * @line_number: line where the opcode is encountered
*/

void push(stack_t **stack, unsigned int line_number)
{
	char *arg = strtok(NULL, " \n\t\r");
	int n;
	*stack = malloc(sizeof(stack_t));

	if (!arg || !isdigit(*arg) && *arg != '-')
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	n = atoi(arg);
	if (!(*stack))
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	(*stack)->n = n;
	(*stack)->prev = NULL;
	(*stack)->next = NULL;
}
