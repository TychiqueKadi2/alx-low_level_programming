#include "main.h"

/**
 * read_textfile - reads a textfile and printd the content
 * @filename: name of text file
 * @letters: number of letters printed
 * Return: no. of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileD;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	fileD = open(filename, O_RDONLY);

	if (fileD == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	rd = read(fileD, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(fileD);
	free(buffer);

	return (wr);
}
