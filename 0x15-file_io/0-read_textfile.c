#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints stdout
 * @filename: Filename to be read
 * @letters: Number of letters to read and print
 * Return: Number of letters it could read and print
 */
/*This code reads a text file and prints the text to standard output*/
/*It opens the file, allocates memory for the buffer, reads from the file into the buffer
 * reads from the file into the buffer, then writes the contents
 * of the buffer to the console.
 *  Finally, it closes the file and frees the memory
 *  allocated to the buffer.
 */ 

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fdopen, fdread, fdwrite;
	char *buf;

	fdopen = open(filename, O_RDWR);
	buf = malloc(sizeof(char) * letters);

	if (fdopen == -1 || filename == NULL)
		return (0);
	if (buf == NULL)
		return (0);

	fdread = read(fdopen, buf, letters);
	fdwrite = write(STDOUT_FILENO, buf, fdread);
	close(fdopen);
	free(buf);

	return (fdwrite);
}
