#include <unistd.h>

int ft_atoi(char *s) {
	int res;

	res = 0;
	while (*s)
		res = res * 10 + *s++ - '0';
	return res;
}

int prime_sum(int nb) {
	int i;

	i = 1;
	while (++i < nb)
		if (nb % i == 0)
			return 0;
	return 1;
}

void ft_putnbr(int n) {
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

void add_prime_sum(int nb) {
	int i;
	int prime;

	if (nb <= 0)
	{
		write(1, "0", 1);
		return ;
	}
	i = 1;
	prime = 0;
	while (++i <= nb)
		if (prime_sum(i))
			prime += i;
	ft_putnbr(prime);
}

int main(int ac, char **av ){
	if (ac == 2)
		add_prime_sum(ft_atoi(av[1]));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}