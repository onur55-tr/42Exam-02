int	is_power_of_2(unsigned int n) {
	int	i;

	i = 1;
	while (i < __INT_MAX__)
	{
		if (n == i)
			return (1);
		i *= 2;
	}
	return 0;
}
#include <stdio.h>
int main(void) {
	printf("%d\n", is_power_of_2(2));
}