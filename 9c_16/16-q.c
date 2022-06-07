#include <stdio.h>
#include <string.h>

typedef struct
{
	char	name[64];
	int		age;
	int		sex;
} 			people;

void struct_print(people data[], int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%d\n", i + 1);
		printf("name\t= %s\n", data[i].name);
		printf("age\t= %d\n", data[i].age);
		if (data[i].sex == 0)
			printf("sex\t= male\n");
		else
			printf("sex\t= female\n");	
	}
	return ;
}

int main(void)
{
	int count;
	people data[3];

	count = sizeof(data) / sizeof(data[0]);

	strcpy(data[0].name, "MARIO");
	data[0].age = 20;
	data[0].sex = 0;
	strcpy(data[1].name, "LUIGI");
	data[1].age = 20;
	data[1].sex = 0;
	strcpy(data[2].name, "PEACH");
	data[2].age = 20;
	data[2].sex = 1;
	struct_print(data, count);
	return (0);
}

// sample code
// #include <stdio.h>
// #include <string.h>

// typedef struct
// {
//     char name[256];
//     int age;
//     int sex;
// } People;

// void InputPeople(People *data);
// void ShowPeople(People data);

// int main(void)
// {
//     People data[3];
//     int i;

//     for (i = 0; i < 3; i++)
//     {
//         InputPeople(&data[i]);
//     }

//     for (i = 0; i < 3; i++)
//     {
//         ShowPeople(data[i]);
//     }

//     return 0;
// }

// void InputPeople(People *data)
// {
//     printf("名前:");
//     scanf("%s", data->name);
//     printf("年齢:");
//     scanf("%d", &data->age);
//     printf("性別(1-男性、2-女性):");
//     scanf("%d", &data->sex);
//     printf("\n");
// }

// void ShowPeople(People data)
// {
//     char sex[16];

//     printf("名前:%s\n", data.name);
//     printf("年齢:%d\n", data.age);

//     if (data.sex == 1)
//     {
//         strcpy(sex, "男性");
//     }
//     else
//     {
//         strcpy(sex, "女性");
//     }

//     printf("性別:%s\n", sex);
//     printf("\n");
// }
