#include <stdio.h>

/**
 * main -> this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command line
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
