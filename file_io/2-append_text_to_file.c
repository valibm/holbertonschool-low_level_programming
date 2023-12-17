#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Is a function that appends text at the end of a file.
 * @filename: Name of a file.
 * @text_content: Content to be appended to the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdw, len;

	if (!filename)
		return (-1);

	if (text_content)
		len = strlen(text_content);

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		fdw = write(fd, text_content, len);
		if (fdw < 0)
			return (-1);
	}

	close(fd);
	return (1);
}
