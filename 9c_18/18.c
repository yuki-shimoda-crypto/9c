#include <stdio.h>

#define EXCISETAX 0.03
#define AUTHOR "森口将憲"


// 下の２つは同じ意味
// ただの番号付にはenumが便利

// #define STATE_NORMAL 0	// 正常
// #define STATE_POISON 1	// 毒
// #define STATE_NUMBLY 2	// 麻痺
// #define STATE_CURSE 3	// 呪い

// enum
// {
// 	STATE_NORMAL, // 正常
// 	STATE_POISON, // 毒
// 	STATE_NUMBLY, // 麻痺
// 	STATE_CURSE	// 呪い
// };


enum {
    ENUM_0,
    ENUM_1,
    ENUM_5 = 5,
    ENUM_6,
    ENUM_7,
    ENUM_9 = 9,
};

#define PRINT_TEMP printf("temp = %d\n", temp)
#define PRINTM(X) printf("%d\n", X)
#define GET_TRAPEZOID_AREA(A, B, H) (A + B) * H / 2


int main(void)
{
	int price;
	const double CONSUMPTIONTAX = 0.05;
	int temp = 100;
	int tmp = 200;
	int up = 3, down = 5, h = 6, s;

	price = 100;
	printf("本体価格\t%d\n", price);
	printf("税込み価格\t%d\n", (int)(price * (1 + EXCISETAX)));
	printf("税込み価格\t%d\n", (int)(price * (1 + CONSUMPTIONTAX)));
	printf("作者\t\t%s\n", AUTHOR);

	printf("ENUM_0 = %d\n", ENUM_0);
	printf("ENUM_1 = %d\n", ENUM_1);
	printf("ENUM_5 = %d\n", ENUM_5);
	printf("ENUM_6 = %d\n", ENUM_6);
	printf("ENUM_7 = %d\n", ENUM_7);
	printf("ENUM_9 = %d\n", ENUM_9);

	PRINT_TEMP;
	PRINTM(temp);
	PRINTM(tmp);

	s = GET_TRAPEZOID_AREA(up, down, h);
	printf("面積 = %d\n", s);

	return (0);
}











//  enum定数
// C言語には、＃defineやconstの他に、enum(エナム)定数があります。
// enum定数の宣言の仕方は次の通りです。

// enum定数

// enum {
//     名前,
//     名前,
//     名前
// };


// enum定数では、数値を指定する必要はなく(指定することもできる)、
// 名前だけで自動的に数値がつけられるので、大量の定数を宣言する場合に便利です。

// 自動的に数値がつけられるのでは、定数として利用出来ないようにも思えますが、
// enum定数は、主にフラグ定数として使用されます。
// たとえば、RPGゲームにおいて、キャラの状態を表す場合、

// キャラの状態
// 0 正常
// 1 毒
// 2 マヒ
// 3 呪われ

// のように番号をつけて区別する必要がありますが、これを直接数値で区別すると、
// どれがどれだかわからなくなってとても不便です。
// そこで、＃define文を用いれば、

// ＃defineの場合

// #define STATE_NORMAL 0 /* 正常 */
// #define STATE_POISON 1 /* 毒 */
// #define STATE_NUMBLY 2 /* マヒ */
// #define STATE_CURSE 3 /* 呪われ */


// のようにして名前で表すことができるので、わかりやすくなります。
// しかし、この場合、数値それ自体には意味がなく、ただ区別出来れば良いだけですから、
// 次のようにenumで自動的に番号を振らせた方が楽で良いのです。

// enumの場合

// enum {
//     STATE_NORMAL, /* 通常 */
//     STATE_POISON, /* 毒 */
//     STATE_NUMBLY, /* マヒ */
//     STATE_CURSE /* 呪われ */
// };


// この様に便利なenumですが、残念なことに、enumは整数値しか扱えません。
// 実数値を扱う場合には、＃defineかconst定数にするしかありません。
// また、文字列も扱えません。

// 最後の,
// enumの名前の後につける，は、正式には最後の名前にはつけませんが、
// 実際にはつけても問題なく動作します。
// したがって、次のように書くと、名前の追加や修正が楽になります。

// enum {
// STATE_NORMAL,
// STATE_POISON,
// STATE_NUMBLY,
// STATE_CURSE, /* ここにも，がある */
// };


// 数値指定enum定数
// enum定数では、数値を省略できますが、必要であれば指定することもできます。
// enum定数の宣言の仕方は次の通りです。

// enumに数値を指定

// enum {
//     名前 = 数値,
//     名前 = 数値,
//     名前 = 数値
// };


// 次は、数値を指定したenum定数の例です。

// ソースコード

// enum {
//     ENUM_0,
//     ENUM_1,
//     ENUM_5 = 5,
//     ENUM_6,
//     ENUM_7,
//     ENUM_9 = 9,
// };


// 数値を省略した場合、1番先頭の名前を0として、以後は1ずつ増やした値がつけられます。
// どこかで数値を指定した場合、そこは指定した数値、以後は1ずつ増やした値になります。
// 上の例では、先頭から、0，1，5，6，7，9、の順番に数値がつけられます。