#include <stdio.h>

int main(void)
{
	int len, i;
    char str1[256], str2[256];

    scanf("%s", str1);
    scanf("%s", str2);
	// for (len = 0; str1[len] != '\0', len++);
	// len =0;
	while (str1[len] != '\0')
	len++;
	
	for (i = 0; str2[i] != '\0'; i++)
	{
		str1[len] = str2[i];
		len++;
	}
	str1[len] = '\0';
    printf("%s\n", str1);
    return 0;
}