// TODO HEADERS!!!

#include "fcntl.h"

void ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s, fd);
    write(fd, "\0", sizeof(char ));
}