#include"stru.h"
void menu2()
{
  system("cls");
  printf("\t\t\t#############################\n");
  printf("\t\t\t###########修改模块##########\n");
  printf("\t\t\t###     1-按学号修改      ###\n");
  printf("\t\t\t###     2-按姓名修改      ###\n");
  printf("\t\t\t###     3-按班级修改      ###\n");
  printf("\t\t\t###        0-退出         ###\n");
  printf("\t\t\t#############################\n");
  printf("\t\t\t  请输入0-3选项其他输入无效! \n");
  printf("\t\t\t#############################\n");
}
void menu5()
{
  system("cls");
  printf("\t\t\t#############################\n");
  printf("\t\t\t###########修改模块##########\n");
  printf("\t\t\t###     1-修改学生学号    ###\n");
  printf("\t\t\t###     2-修改学生姓名    ###\n");
  printf("\t\t\t###     3-修改学生班级    ###\n");
  printf("\t\t\t###     4-修改基础成绩    ###\n");
  printf("\t\t\t###     5-修改专业成绩    ###\n");
  printf("\t\t\t###     6-修改选修成绩    ###\n");
  printf("\t\t\t###     7-修改人文成绩    ###\n");
  printf("\t\t\t###     8-修改实验成绩    ###\n");
  printf("\t\t\t###        0-退出         ###\n");
  printf("\t\t\t#############################\n");
  printf("\t\t\t  请输入0-8选项其他输入无效! \n");
  printf("\t\t\t#############################\n");
}

void revise()
{      int a;
  do{
    menu2();
    printf("\n\t\t\t\t   请选择:");
    scanf("%d",&a);
    switch(a)
    { case 0:break;
      case 1:revise1();break;
      case 2:revise2();break;
      case 3:revise3();break;
      default:printf("输入无效!");
    }
    }while(a!=0);
getch();
}
void modi(int u)
{      int a;
  do{
    menu5();
    printf("\n\t\t\t\t   请选择:");
    scanf("%d",&a);
    switch(a)
    { case 0:break;
      case 1:modi1(u);break;
      case 2:modi2(u);break;
      case 3:modi3(u);break;
      case 4:modi4(u);break;
      case 5:modi5(u);break;
      case 6:modi6(u);break;
      case 7:modi7(u);break;
      case 8:modi8(u);break;
      default:printf("输入无效!");
    }
    }while(a!=0);
  getch();
}
void revise1()
{   char sn[11];
 int i;
  printf("请输入要修改学生的学号：");
  scanf("%s",sn);
  for(i=0;i<n;i++)
  if(strcmp(sn,st[i].num)==0)
     {printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
       printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
getch();
modi(i);
save();
     break;
     };
    getch();
}
void revise2()
{ char sn[10];
  int i;
  printf("请输入要修改学生的姓名：");
  scanf("%s",sn);
  for(i=0;i<n;i++)
  if(strcmp(sn,st[i].name)==0)
     {printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
modi(i);
save();
    break;
    }
    getch();
}
void revise3()
{ char sn[10];
char sm[10];
  int i;
  i=0;
   int m;
  m=0;
  int p;
  p=0;
  int q;
  q=0;
  int u;
  u=0;
  printf("请输入要查询的班级：");
  scanf("%s",sn);

do{
  if(strcmp(sn,st[i].class)==0)
     {
         p++;
         if(p==1)
       printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
      m=1;};
     i++;
     }while(i!=n);
 printf("请输入新的班级名称:");
  scanf("%s",sm);
  do{
       if(strcmp(sn,st[u].class)==0)
     {
         q++;
         strcpy(st[u].class,sm);
         if(q==1)
       printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",u+1,st[u].num,st[u].name,st[u].class,st[u].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
    };
     u++;
     }while(u!=n);
     save();
if(m==0)
    printf("\n对不起！没有该学号，任意键继续");
    else printf("\n按任意键继续\n");
     getch();

}

#include<string.h>
void modi1(int i)
{    char sm[11];
     printf("请输入新的学生学号\n");
   scanf("%s",sm);
    strcpy(st[i].num,sm);
    printf("学号修改成功\n");
printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
    getch();
    }
void modi2(int i)
{   char sm[10];
    printf("请输入新的学生姓名\n");
    scanf("%s",sm);
     strcpy(st[i].name,sm);
printf("姓名修改成功\n");
printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   getch();
    }
void modi3(int i)
{ char sm[10];
printf("请输入新的学生班级\n");
    scanf("%s",sm);
     strcpy(st[i].class,sm);
printf("班级修改成功\n");
printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);

   getch();
    }
void modi4(int i)
{
   int sm;
    printf("请输入新的学生基础课成绩\n");
    scanf("%d",&sm);
   st[i].basis=sm;
printf("基础课成绩修改成功\n");
printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
getch();
    }
void modi5(int i)
{   int sm;
    printf("请输入新的学生专业课成绩\n");
    scanf("%d",&sm);
   st[i].prof=sm;
printf("专业课成绩修改成功\n");
printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   getch();
   }
void modi6(int i)
{ int sm;
    printf("请输入新的学生选修课成绩\n");
    scanf("%d",&sm);
    st[i].choice=sm;
printf("选修课成绩修改成功\n");
printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
  getch();
   }
void modi7(int i)
{
    int sm;
    printf("请输入新的学生人文课成绩\n");
    scanf("%d",&sm);
   st[i].hum=sm;
printf("人文课成绩修改成功\n");
printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   getch();
    }
void modi8(int i)
{ int sm;
    printf("请输入新的学生实验成绩\n");
    scanf("%d",&sm);
  st[i].expg=sm;
printf("实验课修改成功\n");
printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   getch();
    }
