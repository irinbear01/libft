#include "libft.h"

int	ft_atoi(char *str)
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
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

//#include <stdio.h>

//int	main(void)
//{
//	char str[] = " ---+--+1234ab567";
//	printf("%d", ft_atoi(str));
//}