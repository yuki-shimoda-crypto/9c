// #include <stdio.h>

// int main(void)
// {
// 	for (int i = 0; i < 9; i++)
// 	{
// 		for (int j = 0; j < 9; j++)
// 			printf("%d x %d = %2d\n", (i + 1) , (j + 1), (i + 1) * (j + 1));
// 		printf("\n");
// 	}
// 	return (0);
// }

#include <stdio.h>

int main(void)
{
    int x, y;

    for (x = 1; x <= 9; x++) {
        for (y = 1; y <= 9; y++) {
            printf(" %2d ", x * y);
        }
        printf(" \n");
    }
    
    return 0;
}
