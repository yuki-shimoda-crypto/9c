#ifndef __PEOPEL_H__
#define __PEOPEL_H__

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[256];
    int age;
    int sex;
} People;

// 個人データ入力
extern void InputPeople(People *data);

// 個人データ表示
extern void ShowPeople(People data);

#endif
