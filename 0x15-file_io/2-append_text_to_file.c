#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a line
 * @filename: the name of the file
 * @text_content: the string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int nlen;
	int rw;

	nlen = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	{
		f = open(filename, O_WRONLY | 0600);
		if (f == -1)
		{
			return (-1);
		}
	}
	if (text_content != NULL)
	{
		while (text_content[nlen] != '\0')
			nlen++;
		rw = write(f, text_content, nlen);
		if (rw == -1 || rw != nlen)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
