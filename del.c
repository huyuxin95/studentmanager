#include"stru.h"
void menu3()
{
  system("cls");
  printf("\t\t\t#############################\n");
  printf("\t\t\t###########删除模块##########\n");
  printf("\t\t\t###     1-按学号删除      ###\n");
  printf("\t\t\t###     2-按姓名删除      ###\n");
  printf("\t\t\t###     3-按班级删除      ###\n");
  printf("\t\t\t###        0-退出         ###\n");
  printf("\t\t\t#############################\n");
  printf("\t\t\t  请输入0-3选项其他输入无效! \n");
  printf("\t\t\t#############################\n");
}

void del()
{   int a;
  do{
    menu3();
    printf("\n\t\t\t\t   请选择:");
    scanf("%d",&a);
    switch(a)
    { case 0:break;
      case 1:del1();break;
      case 2:del2();break;
      case 3:del3();break;
      default:printf("输入无效!");
    }
    }while(a!=0);
  getch();
}


void del1()
{   char sn[11];
  int i,j;
  printf("请输入要删除学生信息的学号：");
  scanf("%s",sn);
  for(i=0;i<n;i++)
  if(strcmp(sn,st[i].num)==0)
     {printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
       printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
       printf("\n是否删除（任意键确认，n\t取消）\n");
       if(getche()!='n');
       {if(i!=n-1);
       for(j=i;j<n-1;j++)
       st[j]=st[j+1];
       n--;
       printf("\n该记录已删除\n");
       save();
       getch();
       break ;
       }

       }
       else printf("\n对不起！没有该学号，任意键继续\n");
}
void del2()
{    char sn[7];
  int i,j;
  printf("请输入要删除学生信息的姓名：");
  scanf("%s",sn);
  for(i=0;i<n;i++)
  if(strcmp(sn,st[i].name)==0)
      {printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
       printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
       printf("\n是否删除（任意键确认，n\t取消）\n");
       if(getche()!='n');
       {if(i!=n-1);
       for(j=i;j<n-1;j++)
       st[j]=st[j+1];
       n--;
       printf("\n该记录已删除\n");
       save();
       getch();
       break ;
       }

       }
       else printf("\n对不起！没有该学号，任意键继续\n");
}
void del3()
{       char sn[10];
  int i,j;
  printf("请输入要删除学生信息的班级：");
  scanf("%s",sn);
  for(i=0;i<n;i++)
  if(strcmp(sn,st[i].class)==0)
      {printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
       printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
       printf("\n是否删除（任意键确认，n\t取消）\n");
       if(getche()!='n');
       {if(i!=n-1);
       for(j=i;j<n-1;j++)
       st[j]=st[j+1];
       n--;
       printf("\n该记录已删除\n");
       save();
       getch();
       break ;
       }

       }
       else printf("\n对不起！没有该学号，任意键继续\n");
}
