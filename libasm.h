#ifndef LIBASM_H
# define LIBASM_H
# include <stdio.h>
# include <unistd.h>
# include <string.h>

ssize_t		ft_write(int, char *, size_t);
ssize_t		ft_read(int, char *, size_t);
ssize_t		ft_strlen(char *);
char		*ft_strcpy(char *, char *);
int			ft_strcmp(char *, char *);
char		*ft_strdup(char *);

#endif