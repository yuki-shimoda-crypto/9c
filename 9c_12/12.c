#include <stdio.h>

int ft_count(void);

int ft_count(void)
{
	static int count;

	count++;
	printf("%d\n", count);
	return (0);
}

int	main(void)
{
	ft_count();
	ft_count();
	ft_count();
	return (0);
}

// https://9cguide.appspot.com/12-03.html
// 関数内で生き残る変数
// 静的なローカル変数の寿命
// ローカル変数、グローバル変数と、寿命の異なる変数を取り上げてきましたが、
// 実は、この2つの中間的な存在である、変わった特徴を持つ変数が存在します。

// 関数内で変数を宣言する時に、型名の前にstatic(スタティック)とつけることで、
// 静的なローカル変数を宣言できます。
// 次のプログラムは、静的なローカル変数を宣言した例です。

// ソースコード

// #include <stdio.h>

// int countfunc(void);

// int main(void)
// {
//     countfunc();
//     countfunc();
//     countfunc();
//     return 0;
// }

// int countfunc(void)
// {
//     static int count; /* 静的なローカル変数 */

//     count++;
//     printf("%d\n", count);

//     return count;
// }


// このプログラムの実行結果は、次の通りになります。

// 実行結果
// 1
// 2
// 3

// 関数内で宣言したにもかかわらず、呼び出し毎に値が1ずつ増えていますし、
// 初期化も行っていないのに、始めの値が0になっています。
// これは、どう見てもグローバル変数にしか見えません。

// しかし、変数countは関数内で宣言されているため、本質的にはローカル変数です。
// 実際、main関数内で変数countを使用すると、エラーとなります。

// これが、静的なローカル変数の特徴です。
// 関数内で宣言されているので、使用できるのは宣言された関数内のみですが、
// その値はプログラムが終了するまで残るのです。
// また、とくに初期化しなくても、自動的に0に初期化されます。

// なお、初期化は初めに1回だけしか行われませんので、
// たとえば、次のように初期化を行った場合もカウントできます。

// ソースコード

// static int count = 0; /* 静的なローカル変数 */


// この変数は、関数が以前に呼び出された時の値を覚えておきたい場合に使用されます。
// 使い道は限られますが、関数の呼び出し回数を数える場合や、
// 検索を行う関数で、以前に見つかった文字位置を記憶する場合などが考えられます。