#include "main.h"

/**
 * create_file - creates and writes into a file
 * @filename: name of file
 * @text_content: content to be written
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fileD;
	int numlet;
	int wr;

	if (!filename)
		return (-1);

	fileD = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fileD == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (numlet = 0; text_content[numlet]; numlet++)
		;

	wr = write(fileD,text_content, numlet);

	if (wr == -1)
		return (-1);
	close(fileD);

	return (1);
}
