#include"stru.h"
void show()
{   stu a;
   stu b;
  int j;
  int k;
  int x;
  int y;
  for(j=0;j<n;j++)
    for(k=1;k<n;k++){
  if(strcmp(st[j].class,st[k].class)>0){
    a=st[j];
    st[j]=st[k];
    st[k]=a;};
    };
   for(x=0;j<n;x++)
    for(y=1;k<n;j++)
    if(strcmp(st[x].class,st[y].class)==0){
    if(strcmp(st[x].num,st[y].num)>0){
    b=st[x];
    st[x]=st[y];
    st[y]=b;
    };
    };



 int i;
  printf("\n���\tѧ��\t ����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���\n");
  for(i=0;i<n;i++)
    printf("%2d  %7s  %7s  %5s     %4d\t%4d\t%4d\t%4d\t%4d\n",i+1,st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
save();
  getch();
}
