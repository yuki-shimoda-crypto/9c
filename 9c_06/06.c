#include <stdio.h>

int main(void)
{
    int min, max, sum;

    /* 入力部分 */
    printf("最小値と最大値を , で区切って入力して下さい。:");
    scanf("%d , %d", &min, &max);

    /* 計算部分 */
    sum = (min + max) * (max - min + 1) / 2;

    /* 表示部分 */
    printf("%d～%d の合計は %d です。\n", min, max, sum);
    return 0;
}
