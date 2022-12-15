// Created by Onur Dursun on 12/15/22.
#include <unistd.h>

void	first_word(char *s) {
	while (*s == 32 || *s == '\t')
		s++;
	while (*s != 32 && *s != '\t' && *s)
		write(1, &*s++, 1);
}

int main(int ac, char **av) {
	if (ac == 2)
		first_word(av[1]);
	write(1, "\n", 1);
}
