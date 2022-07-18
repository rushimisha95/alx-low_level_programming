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
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: text to append to file
 *
 * Return: returns 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	write(fd, text_content, _strlen(text_content));
	close(fd);
	return (1);
}
