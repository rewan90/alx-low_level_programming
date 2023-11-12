#include "main.h"

/**
 * read_textfile - reads file and print
 * @filen: filename
 * @letter: numbers of letter printed.
 *
 * Return: numbers of letter printed.
 */
ssize_t read_textfile(const char *filen, size_t letter)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filen)
		return (0);

	fd = open(filen, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letter));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letter);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}