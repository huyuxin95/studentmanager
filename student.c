#include<stdio.h>
#include<string.h>//与字符串处理相关函数
#include<stdlib.h>//通用工具
#include<malloc.h>//动态存储分配
#include<conio.h>//常用输入输出函数
#include<windows.h>
#include"check.h"
#include"show.h"
#include"query.h"
#include"revise.h"
#include"del.h"
#include"count.h"
#include"save.h"
#include"stru.h"
main() {
	int a;
	do {
		menu();
		printf("\n\t\t\t\t  请输入：");
		scanf("%d",&a);
		switch(a) {
		case 0:
			break;
		case 1:
			check();
			break;
		case 2:
			show();
			break;
		case 3:
			query();
			break;
		case 4:
			revise();
			break;
		case 5:
			del();
			break;
		case 6:
			count();
			break;
		case 7:
			help();
			break;
		default:
			printf("输入无效！\n");
		}
	} while(a!=0);
	getch();
}
void menu() {
	system("cls");
	system("color F9");
	printf("\t\t\t############MENU############\n");
	printf("\t\t\t########欢迎您的使用########\n");
	printf("\t\t\t######学生成绩管理系统######\n");
	printf("\t\t\t###    1-登记学生学分    ###\n");
	printf("\t\t\t###    2-显示学生学分    ###\n");
	printf("\t\t\t###    3-查询学生学分    ###\n");
	printf("\t\t\t###    4-修改学生学分    ###\n");
	printf("\t\t\t###    5-删除学生学分    ###\n");
	printf("\t\t\t###    6-统计学生学分    ###\n");
	printf("\t\t\t###        7-帮助        ###\n");
	printf("\t\t\t###        0-退出        ###\n");
	printf("\t\t\t############################\n");
	printf("\t\t\t 请输入0-7选项其他输入无效! \n");
	printf("\t\t\t############################\n");
}

void help() {
	do {
		printf("\t\t\t   欢迎使用学生学分管理系统\n");
		printf("\t  **本系统可将学生信息以班级优先后学号的顺序输出学生信息！**\n");
		printf("\t  排序好的信息将存储在和student.c同路径下！文件名为score.txt\n");
		printf("\t  *****每次信息修改或删除时修改信息将自动同步到该文件夹*****\n");
		printf("\t  **当执行统计分模块时，将自动生成upgrade.txt,nbasis.txt,***\n");
		printf("\t  **nprof.txt,nchoice.txt,nhum.txt,nexpg.txt用来保存对应信息*\n");
		printf("\t  ******需要注意的是，每次执行模块将更新文件信息，**********\n");
		printf("\t  ****************请将需要的信息及时另行保存****************\n");
		printf("\t  *********************谢谢您的使用！***********************\n");
		printf("\t  *******************输入-b返回主菜单**********************\n");
	} while(getche()!='b');
}





