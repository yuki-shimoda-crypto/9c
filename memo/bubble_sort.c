#include <stdio.h>

// bubble_sort(array, Number of elements to sort)
void bubble_sort(int array[], int num);

void bubble_sort(int array[], int num)
{
	int tmp;
	int i;
	int j;

	i = 0;
	while (i < num - 1)
	{
		j = 0;
		while (j < num - 1)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
			j++;
		}
		i++;		
	}
	return ;
}

int main(void)
{
	int array[] = {2, 3, 43, 542, 5, 5, 2, 5};
	int array_num = sizeof(array) / sizeof(array[0]);

	// printf("%d\n", array_num);
	bubble_sort(array, array_num);
	for (int i = 0; i < array_num; i++)
		printf("%d\n", array[i]);
	return (0);
}
