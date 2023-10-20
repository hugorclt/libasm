#ifndef LIBASM_H
# define LIBASM_H
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <errno.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

ssize_t		ft_write(int, char *, size_t);
ssize_t		ft_read(int, char *, size_t);
ssize_t		ft_strlen(char *);
char		*ft_strcpy(char *, char *);
int			ft_strcmp(char *, char *);
char		*ft_strdup(char *);
void	    print_ok(void);
void	    print_fail(void);
void test_ft_strlen(void);
void test_ft_write(void);
void test_ft_strdup(void);

#endif