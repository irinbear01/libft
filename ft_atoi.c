#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 7 && str[i] <= 13))
	{
		i++;
	}
	while ((str[i] == '+') && (str[i+1] != '-'))
	{
		i++;
	}
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	const char str1[] = " ---+--+1234ab567";
//     const char str2[] = "12345";
//     const char str3[] = "  90abc";
//     const char str4[] = "-678";

//     int num1 = atoi(str1);
//     int ft_num1 = ft_atoi(str1);
//     int num2 = atoi(str2);
//     int ft_num2 = ft_atoi(str2);
//     int num3 = atoi(str3);
//     int ft_num3 = ft_atoi(str3);
//     int num4 = atoi(str4);
//     int ft_num4 = ft_atoi(str4);

// 	printf("String \"%s\" converted to integer(atoi): %d\n", str1, num1);
//     printf("String \"%s\" converted to integer(ft_atoi): %d\n", str1, ft_num1);
//     printf("String \"%s\" converted to integer(atoi): %d\n", str2, num2);
//     printf("String \"%s\" converted to integer(ft_atoi): %d\n", str2, ft_num2);
//     printf("String \"%s\" converted to integer(atoi): %d\n", str3, num3);
//     printf("String \"%s\" converted to integer(ft_atoi): %d\n", str3, ft_num3);
//     printf("String \"%s\" converted to integer(atoi): %d\n", str4, num4);
//     printf("String \"%s\" converted to integer(ft_atoi): %d\n", str4, ft_num4);
// }