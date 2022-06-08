// 17-03
#include <stdio.h>

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
}
	return (0);

// sample code
// #include <stdio.h>

// int main(int argc, char* argv[])
// {

//     while (argc > 0) {

//         argc--;

//         if (argv[argc][0] == '-') {
//             if (argv[argc][1] == 'a')
//                 printf("-a オプション\n");
//             if (argv[argc][1] == 's')
//                 printf("-s オプション\n");
//         }
//     }

//     return 0;
// }
