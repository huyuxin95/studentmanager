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
    printf("\n\t\t\t\t������ѧ����Ϣ��");
        do
  {
  printf("\n������ѧ��ѧ�ţ�");
  scanf("%s",numb);
  if(strlen(numb)>11)
	   {
		   printf("�������ѧ�ų���ӦС��11λ��\n");
		   m=1;
		   getchar();
	   }
	   else m=0;}
   while (m==1);
   strcpy(st[n].num,numb);
   printf("\n������ѧ��������");
     scanf("%s",st[n].name);
     printf("\n������ѧ���༶��");
     scanf("%s",st[n].class);
     do
  {
  printf("\n������ѧ�������γɼ���");
  scanf("%d",&jc);
  if(jc<0||jc>100)
	   {
		   printf("������󣬳ɼ�Ӧ��0-100֮��\n");
		   m=1;
		   getchar();
	   }
	   else m=0;}
   while (m==1);
    st[n].basis=jc;
     do
  {
  printf("\n������ѧ�����Ŀγɼ���");
  scanf("%d",&rw);
  if(rw<0||rw>100)
	   {
		   printf("������󣬳ɼ�Ӧ��0-100֮��\n");
		   m=1;
		   getchar();
	   }
	   else m=0;}
   while (m==1);
   st[n].hum=rw;
    do
  {
  printf("\n������ѧ��ѡ�޿γɼ���");
  scanf("%d",&xx);
  if(xx<0||xx>100)
	   {
		   printf("������󣬳ɼ�Ӧ��0-100֮��\n");
		   m=1;
		   getchar();
	   }
	   else m=0;}
   while (m==1);
     st[n].choice=xx;
  do
  {
  printf("\n������ѧ��רҵ�γɼ���");
  scanf("%d",&zy);
  if(zy<0||zy>100)
	   {
		   printf("������󣬳ɼ�Ӧ��0-100֮��\n");
		   m=1;
		   getchar();
	   }
	   else m=0;}
   while (m==1);
       st[n].prof=zy;
   do
  {
  printf("\n������ѧ��ʵ��γɼ���");
  scanf("%d",&sy);
  if(sy<0||sy>100)
	   {
		   printf("������󣬳ɼ�Ӧ��0-100֮��\n");
		   m=1;
		   getchar();
	   }
	   else m=0;}
   while (m==1);
      st[n].expg=sy;
   n++;
    printf("\n�Ƿ�������룿��n-�˳�,�������������\n");
   }while(getche()!='n');
  }
