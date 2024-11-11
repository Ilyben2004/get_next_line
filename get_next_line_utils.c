#include "get_next_line.h"

char *ft_nextline(int fd, int *currentchar)
{
    char *buffer;
    int i ;
    
    buffer = (char *) malloc (BUFFER_SIZE);
    i = 0;
    read (fd , buffer , *currentchar);
    free (buffer);
    buffer = malloc (BUFFER_SIZE);
   i = 0;
   while (read(fd , &buffer[i],1 ))
   {
        *currentchar = *currentchar + 1;
        if (buffer[i++] == '\n')
            break;
   }
   if(i == 0)
   {
    return (NULL);
   }
   buffer[i]= 0;
   return (buffer);
}