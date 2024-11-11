#include "get_next_line.h"




char *get_next_line(int fd)
{
    static int currentline;

    currentline = 0;
    return (ft_nextline(fd , &currentline));

}