#include "main.h"

/**
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, l;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	for (l = 0; text_content[l]; l++)
		;

	if (!l)
	{
		close(fd);
	}

	write(fd, text_content, l);
	close(fd);
	return (1);
}
