#include "get_next_line.h"
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main()
{
	int fd = open("test.txt",O_RDONLY);
	char *line ;
	while (line = get_next_line(fd))
	{
		printf("%s",line);
	}
}


