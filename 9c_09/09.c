#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 10000; i++)
		printf("%05d\n", i);
	return (0);
}