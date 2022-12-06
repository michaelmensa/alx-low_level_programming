#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
  * create_file - function that creates a file.
  * @filename: name of file to create
  * @text_content: null terminated string to write to the file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, fd_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd_write = write(fd, text_content, strlen(text_content));
	close(fd);
	if (fd_write == -1)
		return (1);
	return (1);
}
