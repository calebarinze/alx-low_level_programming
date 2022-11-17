#ifndef _CALC_H_
#define _CALC_H_

#include <stdlib.h>
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
 *  * struct op - datatype containing an operator(*op), and a function(*f).
 *   *
 *    * @op: the operator (char).
 *     * @f: the corresponding function.
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
