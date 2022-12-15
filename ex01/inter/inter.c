#include <unistd.h>

int check_doubles(char *s, char c, int pos) {
	int	i;

	i = -1;
	while (++i < pos)
		if (s[i] == c)
			return 0;
	return 1;
}

void	inter(char *s, char *s1) {
	int i;
	int j;

	i = -1;
	while (s[++i]) {
		j = -1;
		while (s1[++j])
			if (s[i] == s1[j])
				if (check_doubles(s, s[i], i))
				{
					write(1, &s[i], 1);
					break ;
				}
	}
}

int main(int ac, char **av) {
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
}