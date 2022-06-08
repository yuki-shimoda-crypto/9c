#include <stdio.h>

int main(void)
{
	int num[] = {1, 2, 3, 4};
	char name[][64] = {{"野比のび太"}, {"源静香"},{"剛田武"},{"骨川スネ夫"}};
	int average[] = {0, 90, 40, 7};
	FILE *file;

	file = fopen("doraemon.csv", "w");
	for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
	{
		fprintf(file, "%d,%s,%d\n", num[i], name[i], average[i]);
	}
	fclose(file);
	return (0);
}
