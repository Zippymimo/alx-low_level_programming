#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
        return 0;

    FILE *file = fopen(filename, "r");
    if (file == NULL)
        return 0;

    char *buffer = malloc(sizeof(char) * (letters + 1));
    if (buffer == NULL) {
        fclose(file);
        return 0;
    }

    ssize_t total_read = fread(buffer, sizeof(char), letters, file);
    if (total_read == 0) {
        fclose(file);
        free(buffer);
        return 0;
    }

    ssize_t total_written = write(STDOUT_FILENO, buffer, total_read);
    if (total_written != total_read) {
        fclose(file);
        free(buffer);
        return 0;
    }

    fclose(file);
    free(buffer);

    return total_written;
}
