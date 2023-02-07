#include "main.h"

/**
 * read_textfile - read file and print to output
 * @filename: name of file
 * @letters: size of bytes to be printed
 *
 *Return: number of letters printed or 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd1, fd2;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	fd1 = read(fd, buffer, letters);
	if (fd1 == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	fd2 = write(1, buffer, fd1);
	if (fd2 == -1 || fd2 != fd1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (fd1);
}
