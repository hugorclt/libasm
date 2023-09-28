#include "libasm.h"

int main(void)
{
	{
		printf("---------strlentest----------\n");
		printf("---------Test#1----------\n");
		printf("ft_strlen(\"Hello, World!\") = %ld\n", ft_strlen("Hello, World!\0"));
		printf("strlen(\"Hello, World!\") = %ld\n", strlen("Hello, World!\0"));
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
		char str1[] = "HELLO";
		char str2[] = "HOLLA";

		printf("%s\n", str1);   // displaying what str1 is before ft_strcpy is used on it
		ft_strcpy(str1, str2);  // calling out functtion ft_strcpy on the strings
		printf("%s\n", str1);  // str1 should now become str2
	}

	{
		{
			char str1[] = "HELLO";
			char str2[] = "HOLLA";
			if (strcmp(str1,str2))
				printf("Not Equal\n");
			else
				printf("Equal\n");
		}

		{
			char str1[] = "HELLO";
			char str2[] = "HELLO";
			if (strcmp(str1,str2))
				printf("Not Equal\n");
			else
				printf("Equal\n");
		}
	}
	{
		printf("%s\n", ft_strdup("yesiamastring"));
	}
}