#include <unistd.h>
void	print_bits(unsigned char octet) {
	int bits;
	unsigned char	b;

	bits = 8;
	while (bits--) {
		b = (octet >> bits & 1) + '0';
		write(1, &b, 1);
	}
}
//int main(void) { print_bits('A'); }
