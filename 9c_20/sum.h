#ifndef _INCLUDE_SUM_
#define _INCLUDE_SUM_

/* min～max間の合計値を計算する関数
int min 最小値
int max 最大値
戻り値 int 合計値
*/
extern int sum(int min, int max);

#endif


// int sum(int min, int max);
// extern int Public; // 20-02



// #ifndef _INCLUDE_SUM_
// #define _INCLUDE_SUM_

// int sum(int min, int max);

// #endif


// ヘッダーファイルの重複防ぎ
// ここまでは、extern宣言を使用して、重複して定義されることを回避してきましたが、
// 実は、ヘッダーファイルの重複インクルードそれ自体を防ぐ方法もあります。
// それには、#ifndef～#endif疑似命令を使用します。

// #ifndef～#endif疑似命令は、ある記号が定義されていなかった場合だけ、
// その間に挟まれたプログラムをコンパイルするという記号です。
// この性質を利用して、次のようなヘッダーファイルを作成できます。

// sum.h

// /* sum.h */
// #ifndef _INCLUDE_SUM_
// #define _INCLUDE_SUM_

// int sum(int min, int max);

// #endif


// このヘッダーファイルでは、最初に、記号_INCLUDE_SUM_が定義されているか調べて、
// 定義されていなかった場合だけ、その後のプログラムをコンパイルします。
// ここでは、後にコンパイルされるプログラムの中で、#define疑似命令を使って、
// 記号_INCLUDE_SUM_ を定義しているので、このヘッダーファイルが2回目に呼び出された場合、
// 記号_INCLUDE_SUM_ がすでに定義されていることになり、コンパイルは行われません。

// この様にすれば、同じ宣言を何度も行うことがなくなります。
// 2回目以降はコンパイルされないのでは、1つしか使えなくなるようにも思えますが、
// 最終的にはすべてのソースファイルは結合されるので、1回コンパイルすれば十分です。

// なお、一般には、extern宣言も組み合わせて、次のようにします。
// さらに、この様なコメントを入れると、より良いヘッダーファイルが完成します。
// この書き方であれば、トラブルが起こりにくいため、常にこの書き方をすることをオススメします。

// sum.h

// /* sum.h */
// #ifndef _INCLUDE_SUM_
// #define _INCLUDE_SUM_

// /* min～max間の合計値を計算する関数
// int min 最小値
// int max 最大値
// 戻り値 int 合計値
// */
// extern int sum(int min, int max);

// #endif


// 説明コメントの場所
// この様に、関数を説明するコメントをつけるプログラムは良く見かけます。
// こうすれば、他人が見た時や、時間がたってから自分が見た時でも、
// 内容を素早く把握できて便利です。

// ただ、筆者は、この様なコメントはヘッダーファイルの中に書くべきで、
// ソースファイルの中に書くべきではないと思います。
// ヘッダーファイルはその関数を利用するすべての人が読みますが、
// ソースファイルの方は誰もが読むとは限らないためです。