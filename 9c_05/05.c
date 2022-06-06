#include <stdio.h>
#include <limits.h>

int main(void)
{
	int a = 10000;
	int b = 300;
	int c = 5;
	int d = 100000;
	double pi = 3.14159;
	printf("%%f 1.03 * 9 = %f\n", 1.03 * 9);
	printf("%%d 1.03 * 9 = %d\n", 1.03 * 9);
	printf("%%f 1.06 * 420 = %f\n", 1.06 * 420);
	printf("%%d (int)(1.06 * 420) = %d\n\n", (int)(1.06 * 420));
	printf("int桁数揃え\n");
	printf("a = %5d\n", a);
	printf("b = %5d\n", b);
	printf("c = %5d\n", c);
	printf("d = %5d\n\n", d);
	printf("int桁数揃え0あり\n");
	printf("a = %05d\n", a);
	printf("b = %05d\n", b);
	printf("c = %05d\n", c);
	printf("d = %05d\n\n", d);
	printf("float桁数揃え\n");
	printf("%%全体桁数.小数桁数f \n");
    printf("%6.2f\n\n",pi);

	printf("整数型サイズの定義済み定数\n");
	printf("CHAR_BIT = %d\n" , CHAR_BIT);
	printf("CHAR_MAX = %d\n" , CHAR_MAX);
	printf("CHAR_MIN = %d\n" , CHAR_MIN);
	printf("INT_MAX = %d\n" , INT_MAX);
	printf("INT_MIN = %d\n" , INT_MIN);
	printf("LONG_MAX = %ld\n" , LONG_MAX);
	printf("LONG_MIN = %ld\n" , LONG_MIN);
	printf("SCHAR_MAX = %d\n" , SCHAR_MAX);
	printf("SCHAR_MIN = %d\n" , SCHAR_MIN);
	printf("SHRT_MAX = %d\n" , SHRT_MAX);
	printf("SHRT_MIN = %d\n" , SHRT_MIN);
	printf("UCHAR_MAX = %d\n" , UCHAR_MAX);
	printf("UINT_MAX = %d\n" , UINT_MAX);
	printf("ULONG_MAX = %ld\n" , ULONG_MAX);
	printf("USHRT_MAX = %d\n" , USHRT_MAX);

	return (0);
}