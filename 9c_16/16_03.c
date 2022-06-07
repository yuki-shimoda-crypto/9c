// 16-03

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

int	main(void)
{
	student		data[10];

	// 下の３つは同じ意味
	data[0].year = 10;
	data -> year = 10;
	(*data).year = 10;

	printf("data[0].year =\t %d\n", data[0].year);
	printf("data -> year =\t %d\n", data -> year);
	printf("(*data).year =\t %d\n", (*data).year);

	strcpy(data[1].name, "MARIO");
	printf("data[1].name =\t %s\n", data[1].name);
	return (0);
}

// sample code
// void student_print(student data[], int count)
// {
//     int i;
    
//     for (i = 0; i < count; i++)
//     {
//         printf("[学年]:%d\n", data[i].year);
//         printf("[クラス]:%d\n", data[i].clas);
//         printf("[出席番号]:%d\n", data[i].number);
//         printf("[名前]:%s\n", data[i].name);
//         printf("[身長]:%f\n", data[i].stature);
//         printf("[体重]:%f\n", data[i].weight);
//     }

//     return;
// }
