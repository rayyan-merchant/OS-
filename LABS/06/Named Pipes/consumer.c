#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

#define FIFO_FILE "/tmp/myfifo"

int main() {
    int fd;
    char buffer[BUFSIZ];
    ssize_t num_bytes;

    fd = open(FIFO_FILE, O_RDONLY);
    if (fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    printf("wating for  messages\n");

    while ((num_bytes = read(fd, buffer, BUFSIZ)) > 0) {
        buffer[num_bytes] = '\0';
        printf("Consumer: Received message: %s", buffer);
    }

    if (num_bytes == -1) {
        perror("read");
        exit(EXIT_FAILURE);
    }

    close(fd);
    unlink(FIFO_FILE);
    return 0;
}
