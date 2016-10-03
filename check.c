#include"stru.h"
void check()
{

   do{
        int m;
    char numb[30];
    int jc;
    int rw;
    int xx;
    int zy;
    int sy;
    printf("\n\t\t\t\t请输入学生信息：");
        do
  {
  printf("\n请输入学生学号：");
  scanf("%s",numb);
  if(strlen(numb)>11)
	   {
		   printf("输入错误，学号长度应小于11位数\n");
		   m=1;
		   getchar();
	   }
	   else m=0;}
   while (m==1);
   strcpy(st[n].num,numb);
   printf("\n请输入学生姓名：");
     scanf("%s",st[n].name);
     printf("\n请输入学生班级：");
     scanf("%s",st[n].class);
     do
  {
  printf("\n请输入学生基础课成绩：");
  scanf("%d",&jc);
  if(jc<0||jc>100)
	   {
		   printf("输入错误，成绩应在0-100之间\n");
		   m=1;
		   getchar();
	   }
	   else m=0;}
   while (m==1);
    st[n].basis=jc;
     do
  {
  printf("\n请输入学生人文课成绩：");
  scanf("%d",&rw);
  if(rw<0||rw>100)
	   {
		   printf("输入错误，成绩应在0-100之间\n");
		   m=1;
		   getchar();
	   }
	   else m=0;}
   while (m==1);
   st[n].hum=rw;
    do
  {
  printf("\n请输入学生选修课成绩：");
  scanf("%d",&xx);
  if(xx<0||xx>100)
	   {
		   printf("输入错误，成绩应在0-100之间\n");
		   m=1;
		   getchar();
	   }
	   else m=0;}
   while (m==1);
     st[n].choice=xx;
  do
  {
  printf("\n请输入学生专业课成绩：");
  scanf("%d",&zy);
  if(zy<0||zy>100)
	   {
		   printf("输入错误，成绩应在0-100之间\n");
		   m=1;
		   getchar();
	   }
	   else m=0;}
   while (m==1);
       st[n].prof=zy;
   do
  {
  printf("\n请输入学生实验课成绩：");
  scanf("%d",&sy);
  if(sy<0||sy>100)
	   {
		   printf("输入错误，成绩应在0-100之间\n");
		   m=1;
		   getchar();
	   }
	   else m=0;}
   while (m==1);
      st[n].expg=sy;
   n++;
    printf("\n是否继续输入？（n-退出,任意键继续）：\n");
   }while(getche()!='n');
  }
