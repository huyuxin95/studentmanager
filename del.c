#include"stru.h"
void menu3()
{
  system("cls");
  printf("\t\t\t#############################\n");
  printf("\t\t\t###########ɾ��ģ��##########\n");
  printf("\t\t\t###     1-��ѧ��ɾ��      ###\n");
  printf("\t\t\t###     2-������ɾ��      ###\n");
  printf("\t\t\t###     3-���༶ɾ��      ###\n");
  printf("\t\t\t###        0-�˳�         ###\n");
  printf("\t\t\t#############################\n");
  printf("\t\t\t  ������0-3ѡ������������Ч! \n");
  printf("\t\t\t#############################\n");
}

void del()
{   int a;
  do{
    menu3();
    printf("\n\t\t\t\t   ��ѡ��:");
    scanf("%d",&a);
    switch(a)
    { case 0:break;
      case 1:del1();break;
      case 2:del2();break;
      case 3:del3();break;
      default:printf("������Ч!");
    }
    }while(a!=0);
  getch();
}


void del1()
{   char sn[11];
  int i,j;
  printf("������Ҫɾ��ѧ����Ϣ��ѧ�ţ�");
  scanf("%s",sn);
  for(i=0;i<n;i++)
  if(strcmp(sn,st[i].num)==0)
     {printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
       printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
       printf("\n�Ƿ�ɾ���������ȷ�ϣ�n\tȡ����\n");
       if(getche()!='n');
       {if(i!=n-1);
       for(j=i;j<n-1;j++)
       st[j]=st[j+1];
       n--;
       printf("\n�ü�¼��ɾ��\n");
       save();
       getch();
       break ;
       }

       }
       else printf("\n�Բ���û�и�ѧ�ţ����������\n");
}
void del2()
{    char sn[7];
  int i,j;
  printf("������Ҫɾ��ѧ����Ϣ��������");
  scanf("%s",sn);
  for(i=0;i<n;i++)
  if(strcmp(sn,st[i].name)==0)
      {printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
       printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
       printf("\n�Ƿ�ɾ���������ȷ�ϣ�n\tȡ����\n");
       if(getche()!='n');
       {if(i!=n-1);
       for(j=i;j<n-1;j++)
       st[j]=st[j+1];
       n--;
       printf("\n�ü�¼��ɾ��\n");
       save();
       getch();
       break ;
       }

       }
       else printf("\n�Բ���û�и�ѧ�ţ����������\n");
}
void del3()
{       char sn[10];
  int i,j;
  printf("������Ҫɾ��ѧ����Ϣ�İ༶��");
  scanf("%s",sn);
  for(i=0;i<n;i++)
  if(strcmp(sn,st[i].class)==0)
      {printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
       printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
       printf("\n�Ƿ�ɾ���������ȷ�ϣ�n\tȡ����\n");
       if(getche()!='n');
       {if(i!=n-1);
       for(j=i;j<n-1;j++)
       st[j]=st[j+1];
       n--;
       printf("\n�ü�¼��ɾ��\n");
       save();
       getch();
       break ;
       }

       }
       else printf("\n�Բ���û�и�ѧ�ţ����������\n");
}
