#include "main.h"

/**
 * create_file - function that create a file
 * @filename: the name of the file to create
 * @text_content: a string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int nlen;
	int wr;

	nlen = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[nlen])
			nlen++;
		wr = write(f, text_content, nlen);
		if (wr == -1 || wr != nlen)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
