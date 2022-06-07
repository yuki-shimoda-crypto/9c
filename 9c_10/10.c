#include <stdio.h>

// int main(void)
// {
//     int x = 1, month = 1;
// 	while (x < 1000000)
// 	{
// 		x *= 2;
// 		month++;
// 	}
// 	printf("%dヶ月目\n", month);
//     return 0;
// }

int main(void)
{
    int r;
	do
	{
		printf("半径?:");
		scanf("%d", &r);
	} while (r < 0);
	printf("面積は%6.2lf\n", r * r * 3.14);
    return 0;
}
