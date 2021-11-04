#include "3-calc.h"
/**
 * get_op_func - Get the op func object
 *
 * @s:entry operator to compare.
 * Return: int(*)(int, int)
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", op_mod},
	    {NULL, NULL}};

	int i = 0;

	while (ops[i].op[0])
	{
		if (ops[i].op[0] == *s)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
