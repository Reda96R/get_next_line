#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

char    *get_next_line(int fd);
int ft_strlen(char *str);
int ft_strchr(char *str, int c);
char    *ft_line(char *src);
char    *ft_strcpy(char *dest, char *src);
char    *ft_strjoin(char *s1, char *s2);

#endif