#include "../includes/random.h"

static void ft_gen(int size)
{
	int *s;
	int n;

	s = (int *)malloc(sizeof(int) * (size + 1));
	s[size] = '\0';
	for (int i = 0; i < size ; ++i)
	{
		n = ft_random();
		if (ft_repeat(s, n, i))
			i--;
		else
			s[i] = n;
	}
	int i = -1;
	while (++i < size)
		printf("%d ", s[i]);
	printf("\n");
}

int main(int argc, char **argv)
{
	srand(time(NULL));
	if (argc != 2)
		return (ft_error("program must be launched ./random N_numbers"));
	ft_gen(ft_atoi(argv[1]));
	return (0);
}
