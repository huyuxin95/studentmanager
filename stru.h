#ifndef _STRU_H
#define _STRU_H
#include<stdio.h>
#include<string.h>//���ַ���������غ���
#include<stdlib.h>//ͨ�ù���
#include<malloc.h>//��̬�洢����
#include<conio.h>//���������������
#include<windows.h>
int n;
typedef struct student
{ char num[20],name[10],class[10];
  int basis,hum,choice,prof,expg;
}stu;
stu st[37];

#endif // _STRU_H
