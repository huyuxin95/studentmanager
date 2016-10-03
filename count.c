
#include"stru.h"
void menu4()
{
  system("cls");
  printf("\t\t\t#############################\n");
  printf("\t\t\t###########统计模块##########\n");
  printf("\t\t\t###    1- 可升学的学生    ###\n");
  printf("\t\t\t###    2-需补考基础课的   ###\n");
  printf("\t\t\t###    3-需补考专业课的   ###\n");
  printf("\t\t\t###    4-需补考选修课的   ###\n");
  printf("\t\t\t###    5-需补考人文课的   ###\n");
  printf("\t\t\t###    6-需补考实验课的   ###\n");
  printf("\t\t\t###        0-退出         ###\n");
  printf("\t\t\t#############################\n");
  printf("\t\t\t  请输入0-6选项其他输入无效! \n");
  printf("\t\t\t#############################\n");
}

void count()
{ int a;
  do{
    menu4();
    printf("\n\t\t\t\t   请选择:");
    scanf("%d",&a);
    switch(a)
    { case 0:break;
      case 1:count1();break;
      case 2:count2();break;
      case 3:count3();break;
      case 4:count4();break;
      case 5:count5();break;
      case 6:count6();break;
      default:printf("输入无效!");
    }
    }while(a!=0);
  getch();
}
void count1()
{      int i;
  printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
  for(i=0;i<n;i++)
   if(st[i].basis>=60&st[i].prof>=60&st[i].choice>=60&st[i].hum>=60&st[i].expg>=60)
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
 #define  MAX 5000
 char tembuf[500];
 char outbuf[MAX];
 memset(outbuf,0,MAX);
 FILE *fp;
if((fp=fopen("upgrade.txt","wt+"))==NULL)     //打开输出文件“客房管理.txt”
   {printf("未找到upgrade.txt文件\n");
    exit(0);
   }
   strcpy(outbuf,"     学号\t姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课");
   for(i=0;i<n;i++)
   {if(st[i].basis>=60&st[i].prof>=60&st[i].choice>=60&st[i].hum>=60&st[i].expg>=60)
       sprintf(tembuf,"\n %7s    %7s    %5s     %4d\t%4d\t%4d\t%4d\t%4d",st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   strcat(outbuf,tembuf);
   };

	if(fwrite(outbuf, strlen(outbuf),1,fp)!=1)
    {
        printf("文件写入失败！\n");
    };
    fflush(fp);
    fclose(fp);
     getch();

}
void count2()
{        int i;
  printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
  for(i=0;i<n;i++)
   if(st[i].basis<60&st[i].prof>=60&st[i].choice>=60&st[i].hum>=60&st[i].expg>=60)
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
#define  MAX 5000
 char tembuf[500];
 char outbuf[MAX];
 memset(outbuf,0,MAX);
 FILE *fp;
if((fp=fopen("nbasis.txt","wt+"))==NULL)     //打开输出文件“客房管理.txt”
   {printf("未找到nbasis.txt文件\n");
    exit(0);
   }
   strcpy(outbuf,"     学号\t姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课");
   for(i=0;i<n;i++)
   {if(st[i].basis<60&st[i].prof>=60&st[i].choice>=60&st[i].hum>=60&st[i].expg>=60)
       sprintf(tembuf,"\n %7s    %7s    %5s     %4d\t%4d\t%4d\t%4d\t%4d",st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   strcat(outbuf,tembuf);
   };

	if(fwrite(outbuf, strlen(outbuf),1,fp)!=1)
    {
        printf("文件写入失败！\n");
    };
    fflush(fp);
    fclose(fp);
     getch();

}void count3()
{       int i;
  printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
  for(i=0;i<n;i++)
   if(st[i].basis>=60&st[i].prof<60&st[i].choice>=60&st[i].hum>=60&st[i].expg>=60)
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
#define  MAX 5000
 char tembuf[500];
 char outbuf[MAX];
 memset(outbuf,0,MAX);
 FILE *fp;
if((fp=fopen("nprof.txt","wt+"))==NULL)     //打开输出文件“客房管理.txt”
   {printf("未找到nprof.txt文件\n");
    exit(0);
   }
   strcpy(outbuf,"     学号\t姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课");
   for(i=0;i<n;i++)
   {if(st[i].basis>=60&st[i].prof<60&st[i].choice>=60&st[i].hum>=60&st[i].expg>=60)
       sprintf(tembuf,"\n %7s    %7s    %5s     %4d\t%4d\t%4d\t%4d\t%4d",st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   strcat(outbuf,tembuf);
   };

	if(fwrite(outbuf, strlen(outbuf),1,fp)!=1)
    {
        printf("文件写入失败！\n");
    };
    fflush(fp);
    fclose(fp);
     getch();

}
void count4()
{     int i;
  printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
  for(i=0;i<n;i++)
   if(st[i].basis>=60&st[i].prof>=60&st[i].choice<60&st[i].hum>=60&st[i].expg>=60)
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
#define  MAX 5000
 char tembuf[500];
 char outbuf[MAX];
 memset(outbuf,0,MAX);
 FILE *fp;
if((fp=fopen("nchoice.txt","wt+"))==NULL)     //打开输出文件“客房管理.txt”
   {printf("未找到nchoice.txt文件\n");
    exit(0);
   }
   strcpy(outbuf,"     学号\t姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课");
   for(i=0;i<n;i++)
   {if(st[i].basis>=60&st[i].prof>=60&st[i].choice<60&st[i].hum>=60&st[i].expg>=60)
       sprintf(tembuf,"\n %7s    %7s    %5s     %4d\t%4d\t%4d\t%4d\t%4d",st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   strcat(outbuf,tembuf);
   };

	if(fwrite(outbuf, strlen(outbuf),1,fp)!=1)
    {
        printf("文件写入失败！\n");
    };
    fflush(fp);
    fclose(fp);
     getch();

}
void count5()
{        int i;
  printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
  for(i=0;i<n;i++)
   if(st[i].basis>=60&st[i].prof>=60&st[i].choice>=60&st[i].hum<60&st[i].expg>=60)
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
#define  MAX 5000
 char tembuf[500];
 char outbuf[MAX];
 memset(outbuf,0,MAX);
 FILE *fp;
if((fp=fopen("nhum.txt","wt+"))==NULL)     //打开输出文件“客房管理.txt”
   {printf("未找到nhum.txt文件\n");
    exit(0);
   }
   strcpy(outbuf,"     学号\t姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课");
   for(i=0;i<n;i++)
   {if(st[i].basis>=60&st[i].prof>=60&st[i].choice>=60&st[i].hum<60&st[i].expg>=60)
       sprintf(tembuf,"\n %7s    %7s    %5s     %4d\t%4d\t%4d\t%4d\t%4d",st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   strcat(outbuf,tembuf);
   };

	if(fwrite(outbuf, strlen(outbuf),1,fp)!=1)
    {
        printf("文件写入失败！\n");
    };
    fflush(fp);
    fclose(fp);
     getch();

}
void count6()
{        int i;
  printf("\n序号\t学号\t 姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课\n");
  for(i=0;i<n;i++)
   if(st[i].basis>=60&st[i].prof>=60&st[i].choice>=60&st[i].hum>=60&st[i].expg<60)
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
#define  MAX 5000
 char tembuf[500];
 char outbuf[MAX];
 memset(outbuf,0,MAX);
 FILE *fp;
if((fp=fopen("nexpg.txt","wt+"))==NULL)     //打开输出文件“客房管理.txt”
   {printf("未找到nexpg.txt文件\n");
    exit(0);
   }
   strcpy(outbuf,"     学号\t姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课");
   for(i=0;i<n;i++)
   {if(st[i].basis>=60&st[i].prof>=60&st[i].choice>=60&st[i].hum>=60&st[i].expg<60)
       sprintf(tembuf,"\n %7s    %7s    %5s     %4d\t%4d\t%4d\t%4d\t%4d",st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   strcat(outbuf,tembuf);
   };

	if(fwrite(outbuf, strlen(outbuf),1,fp)!=1)
    {
        printf("文件写入失败！\n");
    };
    fflush(fp);
    fclose(fp);
     getch();

}
