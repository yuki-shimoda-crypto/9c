// https://9cguide.appspot.com/a_code-exor.html
// 今回作った暗号の中で一番強い
#include <stdio.h>
#include <stdlib.h>

/*
CodeExorRandom(入力ファイル名、出力ファイル名、パスワード文字列);
パスワードは任意の長さの文字列を指定できます。
同じパスワードで復号できます。
*/

int get_random(int min, int max)
{
	return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}

void code_exor_random(char input_fname[], char output_fname[], char key[])
{
	FILE *fi, *fo;
	int value;
	int i, early = 0;
	
	fi = fopen(input_fname, "rb");
	if (fi == NULL)
		return ;
	fo = fopen(output_fname, "wb");
	if (fo == NULL)
		return ;
	
	for (i = 0; key[i] !='\0'; i++)
		early += key[i];
	
	srand(early);

	i = 0;
	while ((value = getc(fi)) != EOF)
	{
		putc(value ^ get_random(0, 255), fo);
		i++;
		if (key[i] == '\0')
			i = 0;
	}
	
	fclose(fi);
	fclose(fo);
	return ;
}


int main(void)
{
	char key[256];
	char input[256], output[256];

	printf("Please enter want to encrypt file name\n");
	scanf("%s", input);
	printf("Please enter output file name\n");
	scanf("%s", output);
	printf("Please enter key\n");
	scanf("%s", key);
	
	code_exor_random(input, output, key);
	return (0);
}
