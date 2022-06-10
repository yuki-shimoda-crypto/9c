#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t t1, t2;
	time(&t1);
	for (int i = 0; i < 100000; i++)
		printf("%d\n", i);
	time(&t2);
	printf("%lf\n", difftime(t2, t1));
	return (0);
}
