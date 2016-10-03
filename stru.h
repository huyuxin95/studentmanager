#ifndef _STRU_H
#define _STRU_H
#include<stdio.h>
#include<string.h>//与字符串处理相关函数
#include<stdlib.h>//通用工具
#include<malloc.h>//动态存储分配
#include<conio.h>//常用输入输出函数
#include<windows.h>
int n;
typedef struct student
{ char num[20],name[10],class[10];
  int basis,hum,choice,prof,expg;
}stu;
stu st[37];

#endif // _STRU_H
