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

	int i = 0;


	while (i <= 5)
	{
		if (ops[1].op[0] == s[0] && s && !s[1])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
