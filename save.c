#include"stru.h"

void save ()
 {
     int i;
     #define  MAX 5000
 char tembuf[500];
 char outbuf[MAX];
 memset(outbuf,0,MAX);
 FILE *fp;
if((fp=fopen("score.txt","wt+"))==NULL)     //������ļ����ͷ�����.txt��
   {printf("δ�ҵ�score.txt�ļ�\n");
    exit(0);
   }
   strcpy(outbuf,"     ѧ��\t����\t�༶\t������\tרҵ��\tѡ�޿�\t���Ŀ�\tʵ���");
   for(i=0;i<n;i++)
   {
       sprintf(tembuf,"\n %7s    %7s    %5s     %4d\t%4d\t%4d\t%4d\t%4d",st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   strcat(outbuf,tembuf);
   };

	if(fwrite(outbuf, strlen(outbuf),1,fp)!=1)
    {
        printf("�ļ�д��ʧ�ܣ�\n");
    };
    fflush(fp);

    fclose(fp);}
