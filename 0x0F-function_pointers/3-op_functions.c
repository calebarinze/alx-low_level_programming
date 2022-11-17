#include "3-calc.h"

/**
 *  * op_add - adds a pair of numbers.
 *   * @a: first number.
 *    * @b: second number.
 *     * Return: sum.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *  * op_sub - division b/w two numbers.
 *   * @a: first number.
 *    * @b: second number.
 *     * Return: subtraction.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *  * op_mul - multiplies two numbers.
 *   * @a: first number.
 *    * @b: second number.
 *     * Return: multiplication.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *  * op_div - division b/w two numbers.
 *   * @a: first number.
 *    * @b: second number.
 *     * Return: division.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *  * op_mod - modulus of two numbers.
 *   * @a: first number.
 *    * @b: second number.
 *     * Return: modulus.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
