#include "libasm.h"

int main(void)
{
	{
		printf("---- strlen_test ----\n");
		{
			const int myret = ft_strlen("Hello, World!\0");
			const int ret = strlen("Hello, World!\0");
			if (myret == ret)
				printf("✅");
			else
				printf("❌");
		}
		{
			const int myret = ft_strlen("ceci est un gros test avec des caracteres speciaux et tout ca genre &^#(!#*$))*!$)");
			const int ret = strlen("ceci est un gros test avec des caracteres speciaux et tout ca genre &^#(!#*$))*!$)");
			if (myret == ret)
				printf("✅");
			else
				printf("❌");
		}
		{
			const int myret = ft_strlen("");
			const int ret = strlen("");
			if (myret == ret)
				printf("✅");
			else
				printf("❌");
		}
		{
			const int myret = ft_strlen("1");
			const int ret = strlen("1");
			if (myret == ret)
				printf("✅");
			else
				printf("❌");
		}
	}
	printf("\n");
	{
		printf("---------ft_write_test----------\n");
		{
			ft_write(1, "ft_write test\n", 14);
			write(1, "write test\n", 11);
		}
		{
			ft_write(1, "", 0);
			write(1, "", 0);
		}
		printf("\t---- errno_test ----\n");
		{
			ft_write(-1, "cc\n", 3);
			int realErrno = errno;
			write(-1, "cc\n", 3);
			if (errno == realErrno)
				printf("\t✅");
			else
				printf("\t❌");
		}
	}
	printf("\n");
	{
		printf("---- ft_strcpy_test ----\n");
		char str1[] = "HELLO";
		char str2[] = "HOLLA";

		printf("%s\n", str1);   // displaying what str1 is before ft_strcpy is used on it
		ft_strcpy(str1, str2);  // calling out functtion ft_strcpy on the strings
		printf("%s\n", str1);  // str1 should now become str2
	}
	printf("\n");
	{
		{
			printf("---- ft_strcmp_test ----\n");
			char str1[] = "HELLO";
			char str2[] = "HOLLA";
			if (ft_strcmp(str1,str2))
				printf("✅");
			else
				printf("❌");
		}

		{
			char str1[] = "HELLO";
			char str2[] = "HELLO";
			if (ft_strcmp(str1,str2))
				printf("❌");
			else
				printf("✅");
		}
	}
	printf("\n");
	{
		printf("---- ft_strdup_test ----\n");
		printf("%s\n", ft_strdup("yesiamastring"));
	}
}