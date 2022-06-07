// 16-02

// 配列の時は、引数にしても、渡されるのは先頭アドレスだけでしたが、
// 構造体型の引数は、受け取る側の関数にすべての値がコピーされます。

// 構造体の中に配列が含まれている場合は、配列の中身もコピーされて渡されます。
// したがって、中身を変更しても、呼び出し元の変数には影響しません。
// 配列をコピーして渡したい時（たとえば、リバーシのプログラムで盤面情報を渡したい等）には、
// 構造体にしてしまうのが一番簡単です。 

#include <stdio.h>
#include <string.h>

typedef struct
{
	int		year;
	int		clas;
	int		number;
	char	name[64];
	double	stature;
	double	weight;
}			student;

void student_print(student data);
void student_print_pointer(student *data);

void student_print(student data)
{
	printf("year\t = %d\n", data.year);
	printf("clas\t = %d\n", data.clas);
	printf("number\t = %d\n", data.number);
	printf("name\t = %s\n", data.name);
	printf("stature\t = %4.1lf\n", data.stature);
	printf("weight\t = %4.1lf\n", data.weight);
	return ;
}

void student_print_pointer(student *data)
{
	printf("year\t = %d\n", data -> year);
	printf("clas\t = %d\n", data -> clas);
	printf("number\t = %d\n", data -> number);
	printf("name\t = %s\n", data -> name);
	printf("stature\t = %4.1lf\n", data -> stature);
	printf("weight\t = %4.1lf\n", data -> weight);
	return ;
}

int	main(void)
{
	student		data;
	student		*pdata;

	data.year = 10;
	data.clas = 5;
	data.number = 15;
	strcpy(data.name, "MARIO");
	data.stature = 170.0;
	data.weight = 60.0;
	student_print(data);

	// 構造体のポインタ変数経由で要素にアクセス
	// (*構造体ポインタ変数名).要素名
	// ただ、(*)をつけるのは面倒なので、次の書き方で代用できるようになっています。
	// 構造体のポインタ変数経由で要素にアクセス
	// 構造体ポインタ変数名->要素名

	// pointer
	pdata = &data;
	printf("\npointer\n");
	printf("(*pdata).year\t = %d\n", (*pdata).year);
	printf("pdata -> clas\t = %d\n\n", pdata -> clas);

	student_print_pointer(pdata);
	return (0);
}
