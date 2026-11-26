#include "3-calc.h"

/**
 * get_op_func - selects the correct operation
 * @s: operator passed as argument to the program
 *
 * Return: pointer to the coresponding function or NULL id op invalid
 */

int (*get_op_func(char *s))(int, int)
{
	/** store operators and their coresponding function pointers*/
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	/** start searching from the first structure*/
	int i;

	i = 0;
	while (ops[i].op != NULL && strcmp(s, ops[i].op) != 0)
	{
		i++;
	}

	if (ops[i].op == NULL)
		return (NULL);

	return (ops[i].f);

}
