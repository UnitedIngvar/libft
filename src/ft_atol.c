#include "libft.h"

long	ft_atol(const char *str)
{
	int		minus;
	long	result;

	result = 0;
	minus = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		minus *= -1;
		str++;
	}
	else if (*str == '+')
		++str;
	while (ft_isdigit(*str))
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * minus);
}
