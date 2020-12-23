#include "monty.h"
/**
 * f_pchar - f_pchar
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	ptr = *stack;
	if (ptr == NULL)
	{
		ERR_pchar(line_number);
		return;
	}
	if (ptr->n < 0 || ptr->n > 127)
	{
		ERR_pchar_range(line_number);
		return;
	}
	printf("%c\n", ptr->n);
}
/**
 * f_pstr - f_pstr
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	(void)line_number;
	ptr = *stack;

	while (ptr && ptr->n)
	{
		if (ptr->n < 0 || ptr->n > 127)
			break;
		printf("%c", ptr->n);
		ptr = ptr->next;
	}
	putchar('\n');
}
/**
 * f_rotl - f_rotl
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void f_rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;
	int first_nb;
	int last_nb;

	(void)line_number;
	ptr = *stack;
	if (ptr == NULL)
		return;
	first_nb = ptr->n;
	while (ptr->next != NULL)
		ptr = ptr->next;
	if (ptr == NULL)
		return;
	last_nb = ptr->n;
	(*stack)->n = last_nb;
	ptr->n = first_nb;
}
