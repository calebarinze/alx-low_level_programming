#include "main.h"

void err_func(int filefrom, int fileto, const char *file);

/**
 *  * main - entry point.
 *   * @argc: number to arguments passed to main.
 *    * @argv: array of passed arguments.
 *     * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp_func(argv[1], argv[2]);
	return (0);
}

/**
 *  * cp_func - copies content between files.
 *   * @file_from: pointer to source file.
 *    * @file_to: pointer to destination file.
 *     * Return: nil?
 */

void cp_func(const char *file_from, const char *file_to)
{
	int fd1, fd2;
	ssize_t rbytes = 1024, wbytes;
	char buf[1024];

	fd1 = open(file_from, O_RDONLY);
	err_func(fd1, 0, file_from);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_func(0, fd2, file_to);

	while (rbytes == 1024)
	{
		rbytes = read(fd1, buf, 1024);
		if (rbytes == -1)
			err_func(-1, 0, file_from);

		wbytes = write(fd2, buf, rbytes);
		if (wbytes == -1)
			err_func(0, -1, file_to);
	}

	if (close(fd1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

/**
 *  * err_func - prints appropriate error message for cp function.
 *   * @filefrom: fd for source file.
 *    * @fileto: fd for second file.
 *     * @file: pointer to file.
 */

void err_func(int filefrom, int fileto, const char *file)
{
	if (filefrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}

	if (fileto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
}
