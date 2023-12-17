#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Is a function that creates a file.
 * @filename: Name of the file.
 * @text_content: Content to written inside the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fdw;
	int len;

	if (!filename)
		return (-1);

	if (text_content)
		len = strlen(text_content);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		fdw = write(fd, text_content, len);
		if (fdw == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
