#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Is a function that reads a text file and prints
 *                 it to the POSIX standard output.
 * @filename: file's name.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print,
 *         if the file can not be opened or read, returns 0,
 *         if filename is NULL returns 0,
 *         if write fails or does not write the expected amount
 *         of bytes, returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fdr, fdw;
	char *buff;

	if (!filename || !letters)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

        fd = open(filename, O_RDONLY);
	if (!fd)
		return (0);

	fdr = read(fd, buff, letters);
	if (!fdr)
		return (0);

	fdw = write(STDOUT_FILENO, buff, fdr);
	if (fdw == -1)
		return (0);

	close(fd);
	free(buff);
	return ((ssize_t)fdw);
}
