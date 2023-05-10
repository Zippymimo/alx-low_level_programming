#include "main.h"

int create_file(const char *filename, char *text_content)
{
    if (filename == NULL)
        return -1;

    int file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (file_descriptor == -1)
        return -1;

    if (text_content != NULL) {
        ssize_t text_length = strlen(text_content);
        ssize_t bytes_written = write(file_descriptor, text_content, text_length);
        if (bytes_written != text_length) {
            close(file_descriptor);
            return -1;
        }
    }

    close(file_descriptor);
    return 1;
}
