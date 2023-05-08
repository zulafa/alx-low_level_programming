#include "main.h"

/**
 * read_textfile - this is a functionthat will read the textfile
 * and the print the letters.
 * @filename: rep the filename.
 * @letters: rep the number of letters printed.
 *
 * Return: will return the number of letters
 * printed, returns 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	nrd = read(a, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(a);
	free(buf);
		return (nwr);
}
