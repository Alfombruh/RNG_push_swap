#include "../includes/random.h"

int ft_random(void)
{
	int n;
	int sign;
	int diff;

	n = rand();
	sign = rand();
	diff = rand() / 100;
	if (diff < n)
		n /= diff;
	if (n / 100 > 1000)
		n /= 10;
	if (sign % 2 == 0)
		n *= -1;
	return (n);
}
