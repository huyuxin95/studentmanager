
#include"stru.h"
void menu4()
{
  system("cls");
  printf("\t\t\t#############################\n");
  printf("\t\t\t###########ͳ��ģ��##########\n");
  printf("\t\t\t###    1- ����ѧ��ѧ��    ###\n");
  printf("\t\t\t###    2-�貹�������ε�   ###\n");
  printf("\t\t\t###    3-�貹��רҵ�ε�   ###\n");
  printf("\t\t\t###    4-�貹��ѡ�޿ε�   ###\n");
  printf("\t\t\t###    5-�貹�����Ŀε�   ###\n");
  printf("\t\t\t###    6-�貹��ʵ��ε�   ###\n");
  printf("\t\t\t###        0-�˳�         ###\n");
  printf("\t\t\t#############################\n");
  printf("\t\t\t  ������0-6ѡ������������Ч! \n");
  printf("\t\t\t#############################\n");
}

void count()
{ int a;
  do{
    menu4();
    printf("\n\t\t\t\t   ��ѡ��:");
    scanf("%d",&a);
    switch(a)
    { case 0:break;
      case 1:count1();break;
      case 2:count2();break;
      case 3:count3();break;
      case 4:count4();break;
      case 5:count5();break;
      case 6:count6();break;
      default:printf("������Ч!");
    }
    }while(a!=0);
  getch();
}
void count1()
{      int i;
  printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
  for(i=0;i<n;i++)
   if(st[i].basis>=60&st[i].prof>=60&st[i].choice>=60&st[i].hum>=60&st[i].expg>=60)
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
 #define  MAX 5000
 char tembuf[500];
 char outbuf[MAX];
 memset(outbuf,0,MAX);
 FILE *fp;
if((fp=fopen("upgrade.txt","wt+"))==NULL)     //������ļ����ͷ�����.txt��
   {printf("δ�ҵ�upgrade.txt�ļ�\n");
    exit(0);
   }
   strcpy(outbuf,"     ѧ��\t����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���");
   for(i=0;i<n;i++)
   {if(st[i].basis>=60&st[i].prof>=60&st[i].choice>=60&st[i].hum>=60&st[i].expg>=60)
       sprintf(tembuf,"\n %7s    %7s    %5s     %4d\t%4d\t%4d\t%4d\t%4d",st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   strcat(outbuf,tembuf);
   };

	if(fwrite(outbuf, strlen(outbuf),1,fp)!=1)
    {
        printf("�ļ�д��ʧ�ܣ�\n");
    };
    fflush(fp);
    fclose(fp);
     getch();

}
void count2()
{        int i;
  printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
  for(i=0;i<n;i++)
   if(st[i].basis<60&st[i].prof>=60&st[i].choice>=60&st[i].hum>=60&st[i].expg>=60)
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
#define  MAX 5000
 char tembuf[500];
 char outbuf[MAX];
 memset(outbuf,0,MAX);
 FILE *fp;
if((fp=fopen("nbasis.txt","wt+"))==NULL)     //������ļ����ͷ�����.txt��
   {printf("δ�ҵ�nbasis.txt�ļ�\n");
    exit(0);
   }
   strcpy(outbuf,"     ѧ��\t����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���");
   for(i=0;i<n;i++)
   {if(st[i].basis<60&st[i].prof>=60&st[i].choice>=60&st[i].hum>=60&st[i].expg>=60)
       sprintf(tembuf,"\n %7s    %7s    %5s     %4d\t%4d\t%4d\t%4d\t%4d",st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   strcat(outbuf,tembuf);
   };

	if(fwrite(outbuf, strlen(outbuf),1,fp)!=1)
    {
        printf("�ļ�д��ʧ�ܣ�\n");
    };
    fflush(fp);
    fclose(fp);
     getch();

}void count3()
{       int i;
  printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
  for(i=0;i<n;i++)
   if(st[i].basis>=60&st[i].prof<60&st[i].choice>=60&st[i].hum>=60&st[i].expg>=60)
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
#define  MAX 5000
 char tembuf[500];
 char outbuf[MAX];
 memset(outbuf,0,MAX);
 FILE *fp;
if((fp=fopen("nprof.txt","wt+"))==NULL)     //������ļ����ͷ�����.txt��
   {printf("δ�ҵ�nprof.txt�ļ�\n");
    exit(0);
   }
   strcpy(outbuf,"     ѧ��\t����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���");
   for(i=0;i<n;i++)
   {if(st[i].basis>=60&st[i].prof<60&st[i].choice>=60&st[i].hum>=60&st[i].expg>=60)
       sprintf(tembuf,"\n %7s    %7s    %5s     %4d\t%4d\t%4d\t%4d\t%4d",st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   strcat(outbuf,tembuf);
   };

	if(fwrite(outbuf, strlen(outbuf),1,fp)!=1)
    {
        printf("�ļ�д��ʧ�ܣ�\n");
    };
    fflush(fp);
    fclose(fp);
     getch();

}
void count4()
{     int i;
  printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
  for(i=0;i<n;i++)
   if(st[i].basis>=60&st[i].prof>=60&st[i].choice<60&st[i].hum>=60&st[i].expg>=60)
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
#define  MAX 5000
 char tembuf[500];
 char outbuf[MAX];
 memset(outbuf,0,MAX);
 FILE *fp;
if((fp=fopen("nchoice.txt","wt+"))==NULL)     //������ļ����ͷ�����.txt��
   {printf("δ�ҵ�nchoice.txt�ļ�\n");
    exit(0);
   }
   strcpy(outbuf,"     ѧ��\t����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���");
   for(i=0;i<n;i++)
   {if(st[i].basis>=60&st[i].prof>=60&st[i].choice<60&st[i].hum>=60&st[i].expg>=60)
       sprintf(tembuf,"\n %7s    %7s    %5s     %4d\t%4d\t%4d\t%4d\t%4d",st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   strcat(outbuf,tembuf);
   };

	if(fwrite(outbuf, strlen(outbuf),1,fp)!=1)
    {
        printf("�ļ�д��ʧ�ܣ�\n");
    };
    fflush(fp);
    fclose(fp);
     getch();

}
void count5()
{        int i;
  printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
  for(i=0;i<n;i++)
   if(st[i].basis>=60&st[i].prof>=60&st[i].choice>=60&st[i].hum<60&st[i].expg>=60)
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
#define  MAX 5000
 char tembuf[500];
 char outbuf[MAX];
 memset(outbuf,0,MAX);
 FILE *fp;
if((fp=fopen("nhum.txt","wt+"))==NULL)     //������ļ����ͷ�����.txt��
   {printf("δ�ҵ�nhum.txt�ļ�\n");
    exit(0);
   }
   strcpy(outbuf,"     ѧ��\t����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���");
   for(i=0;i<n;i++)
   {if(st[i].basis>=60&st[i].prof>=60&st[i].choice>=60&st[i].hum<60&st[i].expg>=60)
       sprintf(tembuf,"\n %7s    %7s    %5s     %4d\t%4d\t%4d\t%4d\t%4d",st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   strcat(outbuf,tembuf);
   };

	if(fwrite(outbuf, strlen(outbuf),1,fp)!=1)
    {
        printf("�ļ�д��ʧ�ܣ�\n");
    };
    fflush(fp);
    fclose(fp);
     getch();

}
void count6()
{        int i;
  printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
  for(i=0;i<n;i++)
   if(st[i].basis>=60&st[i].prof>=60&st[i].choice>=60&st[i].hum>=60&st[i].expg<60)
      printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
#define  MAX 5000
 char tembuf[500];
 char outbuf[MAX];
 memset(outbuf,0,MAX);
 FILE *fp;
if((fp=fopen("nexpg.txt","wt+"))==NULL)     //������ļ����ͷ�����.txt��
   {printf("δ�ҵ�nexpg.txt�ļ�\n");
    exit(0);
   }
   strcpy(outbuf,"     ѧ��\t����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���");
   for(i=0;i<n;i++)
   {if(st[i].basis>=60&st[i].prof>=60&st[i].choice>=60&st[i].hum>=60&st[i].expg<60)
       sprintf(tembuf,"\n %7s    %7s    %5s     %4d\t%4d\t%4d\t%4d\t%4d",st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   strcat(outbuf,tembuf);
   };

	if(fwrite(outbuf, strlen(outbuf),1,fp)!=1)
    {
        printf("�ļ�д��ʧ�ܣ�\n");
    };
    fflush(fp);
    fclose(fp);
     getch();

}
