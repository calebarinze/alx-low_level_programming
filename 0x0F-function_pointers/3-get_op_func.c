#include "3-calc.h"
#include <string.h>

/**
 *  * get_op_func - gets operator and function (if valid)
 *   * @s: the possible operator.
 *    *
 *     * Return: Appropriate function.
 */

int (*get_op_func(char *s))(int, int)
		/*links the operator to function.*/
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	/**
	 * * ops[] is an array of datatype (op_t)
	 * * it contains an operator and a function within each element.
	 * * Both operator and function share the same index
	 * * hence, operator and function are matched.
	 */

	int i;

	i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		/*
		 * calls the corresponding fucntion(f)
		 * * only if passed string matches any of ops[] elements
		 * * the pointer directed to get_op_func becomes ops[i].f
		 * * as per the return statement.
		 * * the new pointer will now be one of the operation functions.
		 * */
		i++;
	}
	return (0);
}
