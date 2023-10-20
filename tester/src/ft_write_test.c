#include "../libasm.h"

void	check_write(char *str, int fd) {
	char *buffer = malloc(sizeof(char) * strlen(str) + 1);
	if (!buffer)
		return ;
	ft_write(fd, str, strlen(str));
	close(fd);
	fd = open("test.txt", O_RDONLY);
	int b_read = read(fd, buffer, strlen(str));
	buffer[b_read] = '\0';
	if (strcmp(buffer, str) == 0)
		print_ok();
    else	
		print_fail();
}

void test_ft_write(void) {
	printf("ft_write: ");
	int fd = open("test.txt", O_CREAT | O_RDWR );
	check_write("Ceci est un test", fd);
	close(fd);
	remove("test.txt");
	printf("\n");
}