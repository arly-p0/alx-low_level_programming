#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and prints it
 * to be the POSIX standard ouput
 * @filename: name of the file to be read
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t ler, lew;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * (letters + 1));

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	ler = read(fd, buff, letters);
	if (ler == -1)
	{
		free(buff);
		return (0);
	}
	lew = write(STDOUT_FILENO, buff, ler);
	if (lew == -1 || lew != ler)
	{
		free(buff);
		return (0);
	}
	close(fd);

	free(buff);
	return (lew);
}
