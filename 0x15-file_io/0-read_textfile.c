#include "main.h"
/**
 * read_textfile - reads a text file and prints it ot the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: returns the number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(sizeof(char) * (letters + 1));
	int fd, result;

	if (filename == NULL || buf == NULL || letters <= 0)
		return (0);
	fd = open(filename, O_RDONLY | O_CREAT, 00400);
	if (fd == -1)
		return (0);
	result = read(fd, buf, letters);
	if (result == -1)
		return (0);
	buf[letters + 1] = '\0';
	write(STDOUT_FILENO, buf, result);
	free(buf);
	close(fd);
	return (result);
}
