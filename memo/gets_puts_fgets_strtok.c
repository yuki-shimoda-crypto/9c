// 22-01
// https://9cguide.appspot.com/22-01.html
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[32];
	char str2[32];
	char str3[32];
	char str4[32];
	int val;
	int val2[10];
	char *ch;
	int i;

	// 1 だめな例
	gets(str);
	puts(str);

	// 2 バッファオーバーラン対策
	fgets(str2, sizeof(str2), stdin);
	puts(str2);

	//3 文字列から数値などを取り出す
	fgets(str3, sizeof(str3), stdin);
	val = atoi(str3);
	printf("%d\n", val);

	//4 文字列から複数の数値を取り出す
	fgets(str4, sizeof(str4), stdin);
	ch = strtok(str4, ",\n");
	for (i = 0; i < 10; i++)
	{
		if (ch == NULL)
			break;
		else
			val2[i] = atoi(ch);
		ch = strtok(NULL, ",\n");
	}
	
	for (int j = 0; j < i; j++)
		printf("%d\n", val2[j]);

	return (0);
}


// gets関数 stdio.h
// gets(文字配列);


// puts関数 stdio.h
// puts(文字配列);


// fgets関数 stdio.h
// fgets(文字配列, 配列の要素数, ファイルポインタ);

// 最あとでファイルポインタを指定していることからもわかるように、
// この関数は、ファイルから文字列を読み込むための関数です。
// しかし、実は、C言語では、すべての周辺機器はファイルとして扱うことができます。
// キーボードには stdin という名前のファイルポインタが割り当てられています。
// この stdin を指定すれば、ファイルから読み込む関数がキーボード用に早変わりします。
// 周辺機器はファイル扱い
// 周辺機器のファイル扱いは UNIX というOSで取り入れられた機能で、
// 現在のコンピュータはほとんどすべてが同様の仕組みを備えています。


// strtok関数
// /* 初めの単語を取り出す */
// 単語のアドレス値 = strtok(文字配列, 区切り文字);
// /* 次の単語を取り出す */
// 単語のアドレス値 = strtok(NULL, 区切り文字);

