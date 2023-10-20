#include "../libasm.h"

void	print_ok(void) {
	printf("\e[0;32m[OK] \e[0m");
}

void	print_fail(void) {
	printf("\e[0;31m[FAIL] \e[0m");
}

int main(void)
{
	test_ft_strlen();
	test_ft_write();
	test_ft_strdup();
}