#include "libasm.h"

int main(void)
{
	// {
	// 	printf("---------ft_strlen_test----------")
	// 	printf("\t---------Test#1----------")
	// 	printf("\tft_strlen(\"Hello, World!\") = %d", ft_strlen("Hello, World!"));
	// 	printf("\tstrlen(\"Hello, World!\") = %d", strlen("Hello, World!"));
	// 	printf("\t---------Test#2----------")
	// 	printf("\tft_strlen(\"ceci est un gros test avec des caracteres speciaux et tout ca genre &^#(!#*$))*!$)\") = %d", ft_strlen("ceci est un gros test avec des caracteres speciaux et tout ca genre &^#(!#*$))*!$)"));
	// 	printf("\tstrlen(\"ceci est un gros test avec des caracteres speciaux et tout ca genre &^#(!#*$))*!$)\") = %d", strlen("ceci est un gros test avec des caracteres speciaux et tout ca genre &^#(!#*$))*!$)"));
	// 	printf("\t---------Test#4----------")
	// 	printf("\tft_strlen(\"\") = %d", ft_strlen(""));
	// 	printf("\tstrlen(\"\") = %d", strlen(""));
	// 	printf("\t---------Test#5----------")
	// 	printf("\tft_strlen(\"1\") = %d", ft_strlen("1"));
	// 	printf("\tstrlen(\"1\") = %d", strlen("1"));
	// }

	{
		// printf("---------ft_write_test----------");
		// printf("\t---------Test#1----------");
		ft_write(1, "ft_write test\n", 14);
		write(1, "ft_write test\n", 11);
		// printf("\t---------Test#2----------");
		ft_write(1, "", 0);
		write(1, "", 0);
		// printf("\t---------Test#4----------");
		ft_write(-1, "cc\n", 3);
		write(-1, "cc\n", 3);
		// printf("\t---------Test#5----------");
		ft_write(1, "cc", -1);
		write(1, "cc", -1);
	}
	// {
	// 	printf("---------ft_strlen_test----------")
	// 	printf("\t---------Test#1----------")
	// 	printf("\tft_strlen(\"Hello, World!\")", ft_strlen("Hello, World!"));
	// 	printf("\tstrlen(\"Hello, World!\")", strlen("Hello, World!"));
	// 	printf("\t---------Test#2----------")
	// 	printf("ft_strlen(\"ceci est un gros test avec des caracteres speciaux et tout ca genre &^#(!#*$))*!$)\")", ft_strlen("ceci est un gros test avec des caracteres speciaux et tout ca genre &^#(!#*$))*!$)"));
	// 	printf("strlen(\"ceci est un gros test avec des caracteres speciaux et tout ca genre &^#(!#*$))*!$)\")", strlen("ceci est un gros test avec des caracteres speciaux et tout ca genre &^#(!#*$))*!$)"));
	// 	printf("\t---------Test#4----------")
	// 	printf("\tft_strlen(\"\")", ft_strlen(""));
	// 	printf("\tstrlen(\"\")", strlen(""));
	// 	printf("\t---------Test#5----------")
	// 	printf("\tft_strlen(\"1\")", ft_strlen("1"));
	// 	printf("\tstrlen(\"1\")", strlen("1"));

	// }
}