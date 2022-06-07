#include <stdio.h>

void	judge_min_max(int *min, int *max, int num[], int array_num)
{
	*min = num[0];
	*max = num[0];
	for (int j = 0; j < array_num; j++)
	{
		if (num[j] == -1)
			break ;
		if (num[j] < *min)
			*min = num[j];
		if (*max < num[j])
			*max = num[j];
	}
	return ;
}

int	main(void)
{
	int	min;
	int	max;
	int	num[10];
	int	array_num;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] == -1)
			break ;
	}
	array_num = sizeof(num) / sizeof(num[0]);
	judge_min_max(&min, &max, num, array_num);
	printf("min = %d\n", min);
	printf("max = %d\n", max);
	return (0);
}
