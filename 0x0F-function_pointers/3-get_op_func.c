#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - function that selects the coorect function to perform
 * the operator asked by the user
 * @s: operstor to be passed as argument to the program
 *
 * Return: NULL if the pointer does not matches any of the 5 excepted operators
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while ((*ops[i].op != *s) && ops[i].op != NULL)
	{
		i++;
	}
	return (ops[i].f);
}
