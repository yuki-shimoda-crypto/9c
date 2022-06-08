#include <stdio.h>

enum
{
	NOT_BE_HELD,
	SUMMER,
	WINTER,
};

int judge(int year)
{
	if(year % 4 == 0)
		return SUMMER;
	else if (year % 2 == 0)
		return WINTER;
	else
		return NOT_BE_HELD;
}

int main(void)
{
	int year;

	scanf("%d", &year);
	if (judge(year) == SUMMER)
		printf("SUMMER\n");
	else if (judge(year) == WINTER)
		printf("WINTER\n");
	else
		printf("NOT TO BE HELD\n");
	return (0);
}

// sample code
// #include <stdio.h>

// int olympic(int year);

// enum {
//     OLYMIPC_NON,
//     OLYMIPC_SUMMER,
//     OLYMIPC_WINTER,
// };

// int main(void)
// {
//     int year, hold;

//     scanf("%d", &year);
//     hold = olympic(year);

//     switch (hold) {
//     case OLYMIPC_NON:
//         printf("開かれない\n");
//         break;
//     case OLYMIPC_SUMMER:
//         printf("夏季五輪\n");
//         break;
//     case OLYMIPC_WINTER:
//         printf("冬季五輪\n");
//         break;
//     };

//     return 0;
// }

// int olympic(int year)
// {
//     if (year % 2 == 0) {
//         if (year % 4 == 0) {
//             return OLYMIPC_SUMMER;
//         } else {
//             return OLYMIPC_WINTER;
//         }
//     } else {
//         return OLYMIPC_NON;
//     }
// }
