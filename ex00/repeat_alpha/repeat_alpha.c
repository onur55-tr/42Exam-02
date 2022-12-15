#include <unistd.h>

void repeat_alpha(char *s) {
	int c;

	c = 0;
	while (*s) {
		if (*s >= 'A' && *s <= 'Z')
			c = *s - 64;
		else if (*s >= 'a' && *s <= 'z')
			c = *s - 96;
		while (c)
		{
			write(1, &*s, 1);
			c--;
		}
		c = 1;
		s++;
	}
}

int main(int ac, char **av) {
	if (ac == 2)
		repeat_alpha(av[1]);
	write(1, "\n", 1);
}