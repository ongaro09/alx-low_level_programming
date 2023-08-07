#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define STDERR_FILENO 2
#define BUFFER_SIZE 1024
#define FILE_PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

#define EXIT_SUCCESS 0
#define EXIT_CODE_ARGC_ERROR 97
#define EXIT_CODE_READ_ERROR 98
#define EXIT_CODE_WRITE_ERROR 99
#define EXIT_CODE_CLOSE_ERROR 100
#define EXIT_CODE_PERMISSIONS_ERROR 101


int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
int open_file(const char *filename, int flags, mode_t mode);
void close_file(int fd);
void display_error(const char *msg, const char *filename);
void display_error_fd(const char *msg, int fd);

#endif
