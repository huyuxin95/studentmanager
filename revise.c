#include"stru.h"
void menu2()
{
  system("cls");
  printf("\t\t\t#############################\n");
  printf("\t\t\t###########�޸�ģ��##########\n");
  printf("\t\t\t###     1-��ѧ���޸�      ###\n");
  printf("\t\t\t###     2-�������޸�      ###\n");
  printf("\t\t\t###     3-���༶�޸�      ###\n");
  printf("\t\t\t###        0-�˳�         ###\n");
  printf("\t\t\t#############################\n");
  printf("\t\t\t  ������0-3ѡ������������Ч! \n");
  printf("\t\t\t#############################\n");
}
void menu5()
{
  system("cls");
  printf("\t\t\t#############################\n");
  printf("\t\t\t###########�޸�ģ��##########\n");
  printf("\t\t\t###     1-�޸�ѧ��ѧ��    ###\n");
  printf("\t\t\t###     2-�޸�ѧ������    ###\n");
  printf("\t\t\t###     3-�޸�ѧ���༶    ###\n");
  printf("\t\t\t###     4-�޸Ļ����ɼ�    ###\n");
  printf("\t\t\t###     5-�޸�רҵ�ɼ�    ###\n");
  printf("\t\t\t###     6-�޸�ѡ�޳ɼ�    ###\n");
  printf("\t\t\t###     7-�޸����ĳɼ�    ###\n");
  printf("\t\t\t###     8-�޸�ʵ��ɼ�    ###\n");
  printf("\t\t\t###        0-�˳�         ###\n");
  printf("\t\t\t#############################\n");
  printf("\t\t\t  ������0-8ѡ������������Ч! \n");
  printf("\t\t\t#############################\n");
}

void revise()
{      int a;
  do{
    menu2();
    printf("\n\t\t\t\t   ��ѡ��:");
    scanf("%d",&a);
    switch(a)
    { case 0:break;
      case 1:revise1();break;
      case 2:revise2();break;
      case 3:revise3();break;
      default:printf("������Ч!");
    }
    }while(a!=0);
getch();
}
void modi(int u)
{      int a;
  do{
    menu5();
    printf("\n\t\t\t\t   ��ѡ��:");
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
      default:printf("������Ч!");
    }
    }while(a!=0);
  getch();
}
void revise1()
{   char sn[11];
 int i;
  printf("������Ҫ�޸�ѧ����ѧ�ţ�");
  scanf("%s",sn);
  for(i=0;i<n;i++)
  if(strcmp(sn,st[i].num)==0)
     {printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
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
  printf("������Ҫ�޸�ѧ����������");
  scanf("%s",sn);
  for(i=0;i<n;i++)
  if(strcmp(sn,st[i].name)==0)
     {printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
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
  printf("������Ҫ��ѯ�İ༶��");
  scanf("%s",sn);

do{
  if(strcmp(sn,st[i].class)==0)
     {
         p++;
         if(p==1)
       printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
      m=1;};
     i++;
     }while(i!=n);
 printf("�������µİ༶����:");
  scanf("%s",sm);
  do{
       if(strcmp(sn,st[u].class)==0)
     {
         q++;
         strcpy(st[u].class,sm);
         if(q==1)
       printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",u+1,st[u].num,st[u].name,st[u].class,st[u].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
    };
     u++;
     }while(u!=n);
     save();
if(m==0)
    printf("\n�Բ���û�и�ѧ�ţ����������");
    else printf("\n�����������\n");
     getch();

}

#include<string.h>
void modi1(int i)
{    char sm[11];
     printf("�������µ�ѧ��ѧ��\n");
   scanf("%s",sm);
    strcpy(st[i].num,sm);
    printf("ѧ���޸ĳɹ�\n");
printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
    getch();
    }
void modi2(int i)
{   char sm[10];
    printf("�������µ�ѧ������\n");
    scanf("%s",sm);
     strcpy(st[i].name,sm);
printf("�����޸ĳɹ�\n");
printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   getch();
    }
void modi3(int i)
{ char sm[10];
printf("�������µ�ѧ���༶\n");
    scanf("%s",sm);
     strcpy(st[i].class,sm);
printf("�༶�޸ĳɹ�\n");
printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);

   getch();
    }
void modi4(int i)
{
   int sm;
    printf("�������µ�ѧ�������γɼ�\n");
    scanf("%d",&sm);
   st[i].basis=sm;
printf("�����γɼ��޸ĳɹ�\n");
printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
getch();
    }
void modi5(int i)
{   int sm;
    printf("�������µ�ѧ��רҵ�γɼ�\n");
    scanf("%d",&sm);
   st[i].prof=sm;
printf("רҵ�γɼ��޸ĳɹ�\n");
printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   getch();
   }
void modi6(int i)
{ int sm;
    printf("�������µ�ѧ��ѡ�޿γɼ�\n");
    scanf("%d",&sm);
    st[i].choice=sm;
printf("ѡ�޿γɼ��޸ĳɹ�\n");
printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
  getch();
   }
void modi7(int i)
{
    int sm;
    printf("�������µ�ѧ�����Ŀγɼ�\n");
    scanf("%d",&sm);
   st[i].hum=sm;
printf("���Ŀγɼ��޸ĳɹ�\n");
printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   getch();
    }
void modi8(int i)
{ int sm;
    printf("�������µ�ѧ��ʵ��ɼ�\n");
    scanf("%d",&sm);
  st[i].expg=sm;
printf("ʵ����޸ĳɹ�\n");
printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   getch();
    }
