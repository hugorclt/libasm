#include "../libasm.h"

void	check_ftstrlen(char *str) {
	int ft_res = ft_strlen(str);
	int res = strlen(str);

	if (ft_res != res)
		print_fail();
	else
		print_ok();
}

void test_ft_strlen(void) {
	printf("ft_strlen: ");
	check_ftstrlen("123");
	check_ftstrlen("");
	printf("\n");
}