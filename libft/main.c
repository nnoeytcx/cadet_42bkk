#include <stdio.h>
#include "ft_strncmp.c"
int	main(void)
{
	char *str1 = "vyihn";
	char *str2 = "vyihre";
	printf("%d",ft_strncmp(str1,str2,5));
	return (0);
}

