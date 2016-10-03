#include"stru.h"

void save ()
 {
     int i;
     #define  MAX 5000
 char tembuf[500];
 char outbuf[MAX];
 memset(outbuf,0,MAX);
 FILE *fp;
if((fp=fopen("score.txt","wt+"))==NULL)     //打开输出文件“客房管理.txt”
   {printf("未找到score.txt文件\n");
    exit(0);
   }
   strcpy(outbuf,"     学号\t姓名\t班级\t基础课\t专业课\t选修课\t人文课\t实验课");
   for(i=0;i<n;i++)
   {
       sprintf(tembuf,"\n %7s    %7s    %5s     %4d\t%4d\t%4d\t%4d\t%4d",st[i].num,st[i].name,st[i].class,st[i].basis,st[i].prof,st[i].choice,st[i].hum,st[i].expg);
   strcat(outbuf,tembuf);
   };

	if(fwrite(outbuf, strlen(outbuf),1,fp)!=1)
    {
        printf("文件写入失败！\n");
    };
    fflush(fp);

    fclose(fp);}
