#include<stdio.h>
#include<string.h>//���ַ���������غ���
#include<stdlib.h>//ͨ�ù���
#include<malloc.h>//��̬�洢����
#include<conio.h>//���������������
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
		printf("\n\t\t\t\t  �����룺");
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
			printf("������Ч��\n");
		}
	} while(a!=0);
	getch();
}
void menu() {
	system("cls");
	system("color F9");
	printf("\t\t\t############MENU############\n");
	printf("\t\t\t########��ӭ����ʹ��########\n");
	printf("\t\t\t######ѧ���ɼ�����ϵͳ######\n");
	printf("\t\t\t###    1-�Ǽ�ѧ��ѧ��    ###\n");
	printf("\t\t\t###    2-��ʾѧ��ѧ��    ###\n");
	printf("\t\t\t###    3-��ѯѧ��ѧ��    ###\n");
	printf("\t\t\t###    4-�޸�ѧ��ѧ��    ###\n");
	printf("\t\t\t###    5-ɾ��ѧ��ѧ��    ###\n");
	printf("\t\t\t###    6-ͳ��ѧ��ѧ��    ###\n");
	printf("\t\t\t###        7-����        ###\n");
	printf("\t\t\t###        0-�˳�        ###\n");
	printf("\t\t\t############################\n");
	printf("\t\t\t ������0-7ѡ������������Ч! \n");
	printf("\t\t\t############################\n");
}

void help() {
	do {
		printf("\t\t\t   ��ӭʹ��ѧ��ѧ�ֹ���ϵͳ\n");
		printf("\t  **��ϵͳ�ɽ�ѧ����Ϣ�԰༶���Ⱥ�ѧ�ŵ�˳�����ѧ����Ϣ��**\n");
		printf("\t  ����õ���Ϣ���洢�ں�student.cͬ·���£��ļ���Ϊscore.txt\n");
		printf("\t  *****ÿ����Ϣ�޸Ļ�ɾ��ʱ�޸���Ϣ���Զ�ͬ�������ļ���*****\n");
		printf("\t  **��ִ��ͳ�Ʒ�ģ��ʱ�����Զ�����upgrade.txt,nbasis.txt,***\n");
		printf("\t  **nprof.txt,nchoice.txt,nhum.txt,nexpg.txt���������Ӧ��Ϣ*\n");
		printf("\t  ******��Ҫע����ǣ�ÿ��ִ��ģ�齫�����ļ���Ϣ��**********\n");
		printf("\t  ****************�뽫��Ҫ����Ϣ��ʱ���б���****************\n");
		printf("\t  *********************лл����ʹ�ã�***********************\n");
		printf("\t  *******************����-b�������˵�**********************\n");
	} while(getche()!='b');
}





