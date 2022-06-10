#include <stdio.h>
#include <limits.h>

int main(void)
{
	// デバッグ用定数
	// __LINE__ 	実行されている行番号
	// __FILE__ 	実行されているソースファイル名
	// __DATE__ 	コンパイルされた日付
	// __TIME__ 	コンパイルされた時刻

	// __FILE__ と __LINE__ を使うことで、プログラムの実行時に、
	// エラーの発生した行番号を突き止めることが可能です。
	// ログファイルに吐いたり、簡易デバッガに使うととても便利です。
	// この機能が他のプログラミング言語にも欲しいよう・・・
	




	printf("__LINE__ = %d\n", __LINE__);
	printf("__FILE__ = %s\n", __FILE__);
	printf("__DATE__ = %s\n", __DATE__);
	printf("__TIME__ = %s\n\n", __TIME__);


	printf("CHAR_BIT = %d\n", CHAR_BIT);
	printf("CHAR_MAX = %d\n", CHAR_MAX);
	printf("CHAR_MIN = %d\n", CHAR_MIN);
	printf("INT_MAX = %d\n", INT_MAX);
	printf("INT_MIN = %d\n", INT_MIN);
	printf("LONG_MAX = %ld\n", LONG_MAX);
	printf("LONG_MIN = %ld\n", LONG_MIN);
	printf("SCHAR_MAX = %d\n", SCHAR_MAX);
	printf("SCHAR_MIN = %d\n", SCHAR_MIN);
	printf("SHRT_MAX = %d\n", SHRT_MAX);
	printf("SHRT_MIN = %d\n", SHRT_MIN);
	printf("UCHAR_MAX = %d\n", UCHAR_MAX);
	printf("UINT_MAX = %d\n", UINT_MAX);
	printf("ULONG_MAX = %ld\n", ULONG_MAX);
	printf("USHRT_MAX = %d\n", USHRT_MAX);
	return (0);
}


// 整数型サイズの定義済み定数
// 定数 	数値の意味
// CHAR_BIT 	char型のビット単位のサイズ。
// CHAR_MAX 	char型の最大値。
// CHAR_MIN 	char型の最小値。
// INT_MAX 	int型の最大値。
// INT_MIN 	int型の最小値。
// LONG_MAX 	long型の最大値。
// LONG_MIN 	long型の最小値。
// SCHAR_MAX 	signed　char型の最大値。
// SCHAR_MIN 	signed　char型の最小値。
// SHRT_MAX 	short型の最大値。
// SHRT_MIN 	short型の最小値。
// UCHAR_MAX 	unsigned　char型の最大値。
// UINT_MAX 	unsigned　int型の最大値。
// ULONG_MAX 	unsigned　long型の最大値。
// USHRT_MAX 	unsigned　short型の最大値。
