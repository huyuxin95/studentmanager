#include"stru.h"
void menu1()
{
  system("cls");
  printf("\t\t\t#############################\n");
  printf("\t\t\t###########查询模块##########\n");
  printf("\t\t\t###     1-按学号查询      ###\n");
  printf("\t\t\t###     2-按姓名查询      ###\n");
  printf("\t\t\t###     3-按班级查询      ###\n");
  printf("\t\t\t###        0-退出         ###\n");
  printf("\t\t\t#############################\n");
  printf("\t\t\t  请输入0-3选项其他输入无效! \n");
  printf("\t\t\t#############################\n");
}

void query()
{ int a;
  do{
    menu1();
    printf("\n\t\t\t\t   请选择:");
    scanf("%d",&a);
    switch(a)
    { case 0:break;
      case 1:query1();break;
      case 2:query2();break;
      case 3:query3();break;
      default:printf("输入无效!");
    }
    }while(a!=0);
  getch();
}
void query1()
{ char sn[11];
  int i;
  i=0;
  int m;
  m=0;
  int p;
  p=0;
  printf("请输入要查询的学号：");
  scanf("%s",sn);
do{
  if(strcmp(sn,st[i].num)==0)
     {
         p++;
         if(p==1)
       printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
     m=1;
      };
     i++;
     }while(i!=n);
if(m==0)
    printf("\n对不起！没有该学号，任意键继续");
    else printf("\n按任意键继续\n");
     getch();
  }
void query2()
{ char sn[10];
  int i;
  i=0;
  int m;
  m=0;
  int p;
  p=0;
  printf("请输入要查询的姓名：");
  scanf("%s",sn);
do{
  if(strcmp(sn,st[i].name)==0)
     {
         p++;
         if(p==1)
       printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
     m=1;
      };
     i++;
     }while(i!=n);
if(m==0)
    printf("\n对不起！没有该名字，任意键继续");
    else printf("\n按任意键继续\n");
     getch();
}
void query3()
{   char sn[10];
   int i;
  i=0;
  int m;
  m=0;
  int p;
  p=0;
  printf("请输入要查询的班级：");
  scanf("%s",sn);
do{
  if(strcmp(sn,st[i].class)==0)
     {
         p++;
         if(p==1)
       printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
     m=1;
      };
     i++;
     }while(i!=n);
if(m==0)
    printf("\n对不起！没有该学号，任意键继续");
    else printf("\n按任意键继续\n");
     getch();
}
