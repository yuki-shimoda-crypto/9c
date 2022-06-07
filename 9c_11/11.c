#include <stdio.h>

int	ft_sum(int begin, int end);

int	ft_sum(int begin, int end)
{
	return ((begin + end) * (end - begin + 1) / 2);
}

int	main(void)
{
	int	end;
	int	begin;

	begin = 1;
	end = 100;
	printf("The sum of additions from the begginnig to the end is %d\n",
			ft_sum(begin, end));
	return (0);
}
