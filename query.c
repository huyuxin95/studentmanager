#include"stru.h"
void menu1()
{
  system("cls");
  printf("\t\t\t#############################\n");
  printf("\t\t\t###########��ѯģ��##########\n");
  printf("\t\t\t###     1-��ѧ�Ų�ѯ      ###\n");
  printf("\t\t\t###     2-��������ѯ      ###\n");
  printf("\t\t\t###     3-���༶��ѯ      ###\n");
  printf("\t\t\t###        0-�˳�         ###\n");
  printf("\t\t\t#############################\n");
  printf("\t\t\t  ������0-3ѡ������������Ч! \n");
  printf("\t\t\t#############################\n");
}

void query()
{ int a;
  do{
    menu1();
    printf("\n\t\t\t\t   ��ѡ��:");
    scanf("%d",&a);
    switch(a)
    { case 0:break;
      case 1:query1();break;
      case 2:query2();break;
      case 3:query3();break;
      default:printf("������Ч!");
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
  printf("������Ҫ��ѯ��ѧ�ţ�");
  scanf("%s",sn);
do{
  if(strcmp(sn,st[i].num)==0)
     {
         p++;
         if(p==1)
       printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
     m=1;
      };
     i++;
     }while(i!=n);
if(m==0)
    printf("\n�Բ���û�и�ѧ�ţ����������");
    else printf("\n�����������\n");
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
  printf("������Ҫ��ѯ��������");
  scanf("%s",sn);
do{
  if(strcmp(sn,st[i].name)==0)
     {
         p++;
         if(p==1)
       printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
     m=1;
      };
     i++;
     }while(i!=n);
if(m==0)
    printf("\n�Բ���û�и����֣����������");
    else printf("\n�����������\n");
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
  printf("������Ҫ��ѯ�İ༶��");
  scanf("%s",sn);
do{
  if(strcmp(sn,st[i].class)==0)
     {
         p++;
         if(p==1)
       printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
     m=1;
      };
     i++;
     }while(i!=n);
if(m==0)
    printf("\n�Բ���û�и�ѧ�ţ����������");
    else printf("\n�����������\n");
     getch();
}
