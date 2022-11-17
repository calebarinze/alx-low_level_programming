#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - performs simple operations.
 *   * @argc: number of cmd arguments.
 *    * @argv: array of command line arguments.
 *     *
 *      * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	/**
	 * * the above declaration mirrors the declaration of the operation functions.
	 */

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);
	/*
	 * * argv[2], the operator, will be compared to each ops[i]
	 * * should they match, operation becomes the corresponding func.
	 */

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));
	/*
	 * * the operator functions in the array accept two numbers.
	 * * we will extract these numbers using atoi.
	 */

	return (0);
}
