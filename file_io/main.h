#ifndef FILEIO_H
#define FILEIO_H

#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

size_t _strlen(const char *str);

#endif /* FILEIO_H */
