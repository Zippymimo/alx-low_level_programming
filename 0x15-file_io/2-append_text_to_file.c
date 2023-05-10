#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int append_text_to_file(const char *filename, char *text_content) {
    int fd, len, ret;

    if (filename == NULL)
        return -1;

    if (text_content == NULL)
        return 1;

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return -1;

    len = strlen(text_content);
    ret = write(fd, text_content, len);
    close(fd);

    if (ret == len)
        return 1;

    return -1;
}
