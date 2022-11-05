#include <stdio.h>

/**
 * main -> this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("*argv index %d is = %s\n", i, argv[i]);
	}
	return (0);
}
