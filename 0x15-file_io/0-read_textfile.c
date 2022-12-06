#include "main.h"

/**
 *  * read_textfile - reads a text file and writes its contents to stdout.
 *   * @filename: name of the file to be read.
 *    * @letters: number of bytes ot be printed.
 *     * Return: 0 for failure, otherwise, number of printed chars.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i = 0;
	ssize_t rbs, wbs;
	char *buf = malloc(sizeof(char) * letters);

	if (!filename || !buf)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	rbs = read(fd, buf, letters);
	if (rbs == -1)
	{
		free(buf);
		return (0);
	}

	for (; i < rbs; i++)
	{
		wbs = write(STDOUT_FILENO, &buf[i], 1);
		if (wbs == -1)
		{
			close(fd);
			free(buf);
			return (0);
		}
	}
	close(fd);
	free(buf);
	return (rbs);
}
