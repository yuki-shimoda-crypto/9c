// https://9cguide.appspot.com/a_code-exor.html
// 今回作った暗号の中で3番目に強い
#include <stdio.h>

/* 使用法 
CodeExor(入力ファイル名、出力ファイル名、パスワード);
※パスワードは0～255の範囲内の数値にします。
※同じパスワードで復号できます。
*/

void code_exor(char input_fname[], char output_fname[], int key)
{
	FILE *fi, *fo;
	int value;
	
	fi = fopen(input_fname, "rb");
	if (fi == NULL)
		return ;
	fo = fopen(output_fname, "wb");
	if (fo == NULL)
		return ;
	
	while ((value = getc(fi)) != EOF)
	{
		putc(value ^ key, fo);
	}
	
	fclose(fi);
	fclose(fo);
	return ;
}


int main(void)
{
	int key;
	char input[256], output[256];

	printf("Please enter want to encrypt file name\n");
	scanf("%s", input);
	printf("Please enter output file name\n");
	scanf("%s", output);
	printf("Please enter key\n");
	scanf("%d", &key);
	
	code_exor(input, output, key);
	return (0);
}
