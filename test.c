#include <unistd.h>

int	main(void)
{
	char	a;
	char	b;

	a = 'w';
	b = 10;
	write(1, &a, 1);
	write(1, &b, 1);
	return (0);
}
