#include "libasm.h"

int main(void)
{
	{
		printf("---------strlentest----------\n");
		printf("---------Test#1----------\n");
		printf("ft_strlen(\"Hello, World!\") = %ld\n", ft_strlen("Hello, World!"));
		printf("strlen(\"Hello, World!\") = %ld\n", strlen("Hello, World!"));
		printf("---------Test#2----------\n");
		printf("ft_strlen(\"ceci est un gros test avec des caracteres speciaux et tout ca genre &^#(!#*$))*!$)\") = %ld\n", ft_strlen("ceci est un gros test avec des caracteres speciaux et tout ca genre &^#(!#*$))*!$)"));
		printf("strlen(\"ceci est un gros test avec des caracteres speciaux et tout ca genre &^#(!#*$))*!$)\") = %ld\n", strlen("ceci est un gros test avec des caracteres speciaux et tout ca genre &^#(!#*$))*!$)"));
		printf("---------Test#4----------\n");
		printf("ft_strlen(\"\") = %ld\n", ft_strlen(""));
		printf("strlen(\"\") = %ld\n", strlen(""));
		printf("---------Test#5----------\n");
		printf("ft_strlen(\"1\") = %ld\n", ft_strlen("1"));
		printf("strlen(\"1\") = %ld\n", strlen("1"));
	}
	printf("\n\n");
	{
		printf("---------ft_write_test----------\n");
		printf("---------Test#1----------\n");
		ft_write(1, "ft_write test\n", 14);
		write(1, "write test\n", 11);
		printf("---------Test#2----------\n");
		ft_write(1, "", 0);
		write(1, "", 0);
		printf("---------Test#4----------\n");
		ft_write(-1, "cc\n", 3);
		write(-1, "cc\n", 3);
	}
	{
		char	src[10];
		char	dest[5] = { "hello" };

		ft_strcpy(src, dest);
		printf("%s\n", src);
	}
}