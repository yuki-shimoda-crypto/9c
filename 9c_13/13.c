#include <stdio.h>

int main(void)
{
	int array[10] = {1};
	int array_count;

	array_count = sizeof(array) / sizeof(array[0]);
	for (int i = 0; i < array_count; i++)
		printf("%d\n", array[i]);
	return (0);
}