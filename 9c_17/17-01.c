// 17-01

// r 	読み込み。ファイルがない時は失敗。
// r+ 	読み書き。ファイルがない時は失敗。
// w 	書き込み。ファイルがあっても空のファイルを作る。
// w+ 	読み書き。ファイルがあっても空のファイルを作る。
// a 	追加書き込み。ファイルがない時は作る。
// a+ 	追加読み書き。ファイルがない時は作る。 

#include <stdio.h>

int main(void)
{
	FILE *file;
	int i, j, k;
	char str[256];


	file = fopen("test.txt", "w");
	fprintf(file, "HelloWorld\n");
	for (int i = 0; i < 10; i++)
	{
		if (i == 10 - 1)
			fprintf(file, "%d\n", i);
		else
			fprintf(file, "%d, ", i);
	}
	fclose(file);


	file = fopen("test.txt", "r");
	fscanf(file, "%s", str);
	fscanf(file, "%d,%d,%d", &i, &j, &k);
	fclose(file);

	printf("%s\n", str);
	printf("%d\n", i);
	printf("%d\n", j);
	printf("%d\n", k);
	return (0);	
}



// fcloseの役割
// 今回のプログラムだけだと、fclose関数はとくに必要ないように見えてしまいます。
// しかし、fclose関数には重要な役割がありますので、忘れてはいけません。

// 現代のパソコンでは、同時に複数のアプリが動作できます。
// もし、同じファイルを同時に別々のアプリで書き換えてしまうと、
// どちらを反映すれば良いのかわからなくなってしまいます。

// そこで、fopen関数で書き込みができるように開いたファイルには、
// 他のソフトで書き換えられないよう、ロックしています。
// fclose関数はロックを解除して、他のアプリから使えるようにするために必要です。
