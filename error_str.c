#include "monty.h"
/**
 * ERR_pchar - ERR_pchar
 * @line_number: string
 * Return: 0
 */
int ERR_pchar(int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}
