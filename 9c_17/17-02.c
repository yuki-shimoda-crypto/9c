// 17-02

#include <stdio.h>

int main(void)
{
	FILE *file1;
	FILE *file2;
	FILE *file3;
	int buf = 100;
	int buf2[] = {10, 100, 1000, 10000};
	int buf3[4];

	file1 = fopen("test.dat", "wb");
	fwrite(&buf, sizeof(buf), 1, file1);
	fclose(file1);

	file2 = fopen("test2.dat", "wb");
	fwrite(buf2, sizeof(buf2), 1, file2);
	fclose(file2);

	file3 = fopen("test2.dat", "rb");
	fread(&buf3, sizeof(buf3), 1, file3);
	fclose(file3);

	printf("%d\n", buf3[0]);

	return (0);	
}

// fwrite(書き込む変数アドレス, 1項目のサイズ, 項目数, ファイルポインタ);
// fread(読み込む変数のポインタ, 1項目のサイズ, 項目数, ファイルポインタ)


// バイナリファイルとテキストファイルの使い分け
// バイナリファイルの利点は、読み書きが高速で、ファイルサイズが少なくなることです。
// したがって、画像、動画、音、など、なるべく高速に扱いたいファイルは、基本的にバイナリファイルです。

// それに対して、テキストファイルの利点は、人間が編集しやすいことです。
// 困ったときには、テキストファイルにしておけば、なにかと扱いやすくて重宝します。
