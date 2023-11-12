#include "main.h"

/**
 * create_file - creates a file
 * @filen: filename
 * @textContent: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filen, char *textContent)
{
	int fd;
	int nletter;
	int rwr;

	if (!filen)
		return (-1);

	fd = open(filen, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!textContent)
		textContent = "";

	for (nletter = 0; textContent[nletter]; nletter++)
		;

	rwr = write(fd, textContent, nletter);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}