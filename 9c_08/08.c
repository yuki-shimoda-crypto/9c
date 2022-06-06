#include <stdio.h>

int main(void)
{
	int num = 10;
	switch (num)
	{
	case 1:
		printf("1\n");
		break;
	case 2:
		printf("2\n");
		break;
	case 3:
		printf("3\n");
		break;
	case 4:
		printf("4\n");
		break;
	default:
		printf("0\n");
		break;
	}
	num = 3;
	switch (num)
	{
	case 1:
	case 2:
	case 3:
		printf("male\n");
		break;
	case 4:
		printf("female\n");
		break;
	default:
		printf("num\n");
		break;
	}
	return (0);
}