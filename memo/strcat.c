// 14-03
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[12] = "DRAGON";
    char str2[] = "QUEST";
    strcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}