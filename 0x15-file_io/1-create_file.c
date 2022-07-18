#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: string
 *
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;
	return (x);
}

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: null-termintated string to write to the file
 *
 * Return: returns 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	write(fd, text_content, _strlen(text_content));
	close(fd);
	return (1);
}
