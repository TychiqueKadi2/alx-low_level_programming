#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: content to be appended
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileD;
	int numlet;
	int wr;

	if (!filename)
		return (-1);

	fileD = open(filename, O_WRONLY | O_APPEND);

	if (fileD == -1)
		return (-1);

	if (text_content)
	{
		for (numlet = 0; text_content[numlet]; numlet++)
			;

		wr = write(fileD, text_content, numlet);

		if(wr == -1)
			return (-1);

	}
	close(fileD);
	return (1);
}
