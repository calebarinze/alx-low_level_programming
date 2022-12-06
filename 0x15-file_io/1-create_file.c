#include "main.h"

/**
 *  * create_file - function that creates a file
 *   * @filename: name of file.
 *    * @text_content: string to be written to the file.
 *     * Return: 1 for success, -1 for error.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, l;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	for (l = 0; text_content[l]; l++)
		;

	write(fd, text_content, l);

	close(fd);
	return (1);
}
