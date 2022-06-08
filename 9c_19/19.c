// malloc関数
// ポインタ変数 = malloc(必要なメモリのバイトサイズ);

// キーワード
// 【ヒープ】
// 長期的に使用される大きなサイズのメモリを格納する領域。

// キーワード
// 【動的配列】
// malloc関数などを使用して、
// プログラムの実行中に用意された任意のサイズの配列。

// 呼び出し回数を減らそう
// realloc関数を何回も呼び出すとメモリが散らかってきます。
// この様な状態をフラグメンテーションと呼び、不安定になります。
// 初めのmalloc関数である程度大きめに確保しておき、
// realloc関数を呼び出す場合も、一回で大きめに確保するべきです。


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int *heap;

	heap = (int *)malloc(sizeof(int) * 10);
	if (heap == NULL)
		exit (0); // メモリ確保に失敗したら、exit or abort
	for (int i = 0; i < 10; i++)
		heap[i] = i;
	printf("%d\n", heap[9]);


	heap = (int *)realloc(heap, sizeof(int) * 100);
	heap[99] = 99;
	printf("%d\n", heap[99]);

	free(heap);

	return (0);
}
