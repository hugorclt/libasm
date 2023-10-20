#include "libasm.h"

void    check_ft_strdup(char *str) {
    char *res = ft_strdup(str);
    if (!res)
        return ;

    if (strcmp(res, str) != 0)
        print_fail();
    else
        print_ok();
    free(res);
}

void    test_ft_strdup() {
    printf("ft_strdup: ");
    check_ft_strdup("Bonjour");
    check_ft_strdup("");
    check_ft_strdup("i go by a lot of char and i wrote a roman et tout lorem ipsum machin chose car bizarre dans 3 2 1 '[]304   [/wq])(*&^%$#)");
    printf("\n");
}