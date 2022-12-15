int		ft_atoi_base(const char *str, int str_base) {
	int	sign;
	int	res;

	res = 0;
	sign = 1;
	while(*str == '-')
	{
		str++;
		sign = -1;
	}
	while(*str ){
		res *= str_base;
		if (*str >= '0' && *str <= '9')
			res += *str - 48;
		else if (*str >= 'A' && *str <= 'Z')
			res += *str - 55;
		else if (*str >= 'a' && *str <= 'z')
			res += *str - 87;
		str++;
	}
	return sign * res;
}