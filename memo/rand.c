#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random(int min, int max)
{
	return (min + (int)(rand()  * (max - min + 1.0) / (RAND_MAX + 1.0)));
}

int get_random_v2(int min, int max)
{
	static int i;

	if (i == 0)
	{
		srand((unsigned int)(time(NULL)));
		i = 1;
	}
	return (min + (int)(rand()  * (max - min + 1.0) / (RAND_MAX + 1.0)));
}

int main(void)
{
	// 1 数が大きすぎる　コンパイルしたあと毎回同じ数
	printf("version_%d\n", 1);
	for (int i = 0; i < 5; i++)
		printf("%d\n", rand());

	// 2 コンパイルしたあと毎回同じ数
	printf("version_%d\n", 2);
	for (int i = 0; i < 5; i++)
		printf("%d\n", get_random(1, 6));
	
	// 3
	printf("version_%d\n", 3);
	for (int i = 0; i < 5; i++)
		printf("%d\n", get_random_v2(1, 6));
	return (0);
}



// 前項で作ったGetRandom関数を使えば、好きな乱数を計算できます。
// しかし、実はまだ、考えなければならない問題が残されています。

// 初めに説明したように、疑似乱数は計算によるものです。
// つまり、同じ数を元に作った場合は同じ乱数になってしまうのです。

// 実行結果 1回目
// 1
// 3
// 1
// 3
// 2
// 4
// 2
// 5
// 6
// 2


// 実行結果 2回目
// 1
// 3
// 1
// 3
// 2
// 4
// 2
// 5
// 6
// 2

// なんと、1回目と2回目でまったく同じ値が得られています。何回やっても同じです。
// これでは、とてもではありませんがサイコロの代わりにはなりません。

// この問題を解決するためには、乱数の計算に使う元の数を変える必要があります。
// そのための関数として、srand関数が用意されています。

// srand関数

// srand(元の数);


// ただし、srand関数を使って別の数値を入れたとしても、
// 実行される時に元の数が同じであれば同じ乱数になるので解決にはなりません。
// もちろん、srand関数にrand関数を入れても、初めに作られる乱数が同じなので無意味です。
// ユーザーに入力させる方法もありますが、手間がかかる不親切な手段です。

// 要するに、srand関数になんとかして完全にデタラメな数を入れたいのですが、
// それにピッタリの方法が一つあります。それは、現在時刻を入れる方法です。
// 秒単位の現在時刻をsrand関数に入れれば、毎回異なる元の数を乱数に使えます。

// 現在時刻を得る関数はtime関数で <time.h> を #include する必要があります。
// srand関数とtime関数を次のように使えば、毎回異なる乱数を計算できます。

// 毎回異なる乱数を計算

// srand((unsigned int)time(NULL));


// 乱数発生の場合はtime関数の使い方は知らなくてかまわないのでこの通りにしてください。
// なお、unsigned int という型にキャストしていますが、これは符号なしの整数値です。
// この処理はプログラムを開始するときに1回行えば十分です。
// 次のプログラムは、上記の処理を加えて毎回異なる乱数を計算する例です。

// 毎回異なる乱数を計算

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int GetRandom(int min, int max);

// int main(void)
// {
//     int i;

//     srand((unsigned int)time(NULL));

//     for (i = 0; i < 10; i++) {
//         printf("%d\n", GetRandom(1, 6));
//     }
//     return 0;
// }

// int GetRandom(int min, int max)
// {
//     return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
// }


// このプログラムを2回実行した結果は次の通りになるかも知れません。 ```

// 実行結果 1回目
// 6
// 6
// 5
// 4
// 6
// 5
// 1
// 3
// 2
// 6


// 実行結果 2回目
// 5
// 2
// 2
// 4
// 3
// 5
// 4
// 1
// 3
// 1

// 見事に異なる値が得られるのがわかります。 なお、ここではmain関数でsrand関数を使用していますが、
// 次のようにすればこれをGetRandom関数に含めることができます。

// 毎回異なる乱数を計算

// int GetRandom(int min, int max)
// {
//     static int flag;

//     if (flag == 0) {
//         srand((unsigned int)time(NULL));
//         flag = 1;
//     }

//     return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
// }


// static変数を使うことで、初めの一回だけsrand関数を使うようにしています。
