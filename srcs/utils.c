#include "../includes/random.h"

int ft_error(char *msg)
{
	printf("%s\n", msg);
	return (1);
}

int ft_repeat(int *s, int n, int pos)
{
	if (pos == 0)
		return (0);
	while (pos >= 0)
	{
		if (n == s[pos])
			return(1);
		pos--;
	}
	return (0);
}
