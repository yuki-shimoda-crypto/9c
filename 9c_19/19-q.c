#include <stdio.h>
#include <stdlib.h>

#define MALE 0
#define FEMALE 1

typedef struct
{
	char name[64];
	int age;
	int sex;
}		people;

void input_data (people *table, int *count)
{
		printf("Please enter the name of the %dth person\n", *count + 1);
		scanf("%s", table->name);
		printf("Please enter the age of the %dth person\n", *count + 1);
		scanf("%d", &table->age);// *(table).age
		printf("Enter %d for men and %d for women\n", MALE, FEMALE);
		scanf("%d", &table->sex);
	return ;
}

void output_data (people *table, int table_num)
{
	for (int i = 0; i < table_num; i++)
	{
		printf("name = %s, age = %3d, sex = %6s\n", table[i].name, table[i].age, table[i].sex == MALE ? "MALE" : "FEMALE");
	}
	return ;
}


int main(void)
{
	people *table;
	int people_num;
	int count = 0;

	people_num = 3;
	table = (people *)malloc(sizeof(people) * people_num);
	
	while (1)
	{
		input_data (&table[count], &count);
		if (table[count].age == -1)
			break;
		count++;

		if (people_num <= count)
		{
			people_num *= 2;
			table = (people *)realloc(table, sizeof(people) * people_num);
		}
	}
	
	output_data (table, count);

	free(table);
	return (0);
}

// sample code
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct {
//     char name[256];
//     int age;
//     int sex;
// } People;

// void InputPeople(People* data);
// void ShowPeople(People data);

// int main(void)
// {
//     int i, count, datasize;
//     People* data;

//     datasize = 10;
//     data = (People*)malloc(sizeof(People) * datasize);

//     count = 0;

//     while (1) {
//         InputPeople(&data[count]);
//         if (data[count].age == -1)
//             break;
//         count++;

//         if (count >= datasize) {
//             datasize += 10;
//             data = (People*)realloc(data, sizeof(People) * datasize);
//         }
//     }

//     for (i = 0; i < count; i++) {
//         ShowPeople(data[i]);
//     }

//     free(data);

//     return 0;
// }

// void InputPeople(People* data)
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

//     if (data.sex == 1) {
//         strcpy(sex, "男性");
//     } else {
//         strcpy(sex, "女性");
//     }

//     printf("性別:%s\n", sex);
//     printf("\n");
// }
