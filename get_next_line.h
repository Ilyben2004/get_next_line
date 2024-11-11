
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>

char *ft_nextline(int fd, int *currentline);
char *get_next_line(int fd);


#ifndef BUFFER_SIZE 
#define BUFFER_SIZE 100
#endif
