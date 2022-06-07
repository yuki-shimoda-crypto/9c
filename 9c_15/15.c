// 15-07
#include <stdio.h>

int main(void)
{
	int *i;
	int i1;
	int i2;
	int i3;
	int *data1;
	int *data2;
	int *data3;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int array[] = {1, 2, 3 , 4, 5, 6, 7, 8, 9, 10};
	int array_len;

	i = NULL;
	printf("%p\n",  i);
	printf("%p\n",  &i1);
	printf("%p\n",  &i2);
	printf("%p\n",  &i3);

	// 下の３つは同じことをやっている
	// ポインタ演算は2, 3主に3の事を言うことが多い
	data1 = array;
	data2 = array;
	data3 = array;
	array_len = sizeof(array) / sizeof(array[0]);
	for (int j = 0; j < array_len; j++)
		sum1 += data1[j];
	for (int j = 0; j < array_len; j++)
		sum2 += *(data2 + j);
	for (data3 = array; data3 != &array[array_len]; data3++)
		sum3 += *data3;
	printf("%d\n", sum1);
	printf("%d\n", sum2);
	printf("%d\n", sum3);
	return (0);
}
