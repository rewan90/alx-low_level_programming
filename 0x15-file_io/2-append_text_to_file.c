#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filen: filen.
 * @textContent: added content.
 *
 * Return: 1 if the file exists. -1 if does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filen, char *textContent)
{
	int fd;
	int nletter;
	int rwr;

	if (!filen)
		return (-1);

	fd = open(filen, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (textContent)
	{
		for (nletter = 0; textContent[nletter]; nletter++)
			;

		rwr = write(fd, textContent, nletter);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}