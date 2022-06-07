// 16-01
#include <stdio.h>
#include <string.h>

// How to define structures 1
struct		student_tag_1
{
	int		year;
	int		clas;
	int		number;
	char	name[64];
	double	stature;
	double	weight;
};
typedef struct student_tag_1 student_15;
// "struct student_tag_1" to "student_1" only.

// How to define structures 1
typedef struct student_tag_2
{
	int		year;
	int		clas;
	int		number;
	char	name[64];
	double	stature;
	double	weight;
}			student_2;

// How to define structures 3 recommend
typedef struct
{
	int		year;
	int		clas;
	int		number;
	char	name[64];
	double	stature;
	double	weight;
}			student_3;

int	main(void)
{
	struct student_tag_1	data1;
	student_15				data15;
	student_2				data2;
	student_3				data3;
	student_3				data_copy;

	// 1
	data1.year = 10;
	strcpy(data1.name, "MARIO");
	printf("%d\n", data1.year);
	printf("%s\n", data1.name);
	// 1.5
	data15.year = 10;
	strcpy(data15.name, "MARIO");
	printf("%d\n", data15.year);
	printf("%s\n", data15.name);
	// 2
	data2.year = 10;
	strcpy(data2.name, "MARIO");
	printf("%d\n", data2.year);
	printf("%s\n", data2.name);
	// 3
	data3.year = 10;
	strcpy(data3.name, "MARIO");
	printf("%d\n", data3.year);
	printf("%s\n", data3.name);
	// struct copy
	data_copy = data3;
	printf("%d\n", data_copy.year);
	printf("%s\n", data_copy.name);
	return (0);
}
