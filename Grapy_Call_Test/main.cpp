#include <stdio.h>
#include "Graph_Lib.h"
#pragma comment (lib,"GraphLib.lib")

#include "Test_GraphyMatrix.h"

int Test_GraphyList();
int Test_GraphyMatrix();

static int Call_ID = 1;

int main()
{
	char Graphy_Type;
	while (true)
	{
		puts("������Ե�ͼ�Ĵ洢�ṹ��");
		puts("M:�ڽӾ���洢�ṹ��ͼ");
		puts("L:�ڽӱ�洢�ṹ��ͼ");
		puts("q:�˳�����");

		scanf("%c", &Graphy_Type);
		getchar();

		if (Graphy_Type == 'L')
		{
			if (Test_GraphyList() == 0)
				return 0;
		}
		else if (Graphy_Type == 'M')
		{
			if (Test_GraphyMatrix() == 0)
				return 0;
		}
		else if (Graphy_Type == 'q')
					return 0;
		else
			puts("�����������");
	}
	
	return 0;
}

int Test_GraphyList()
{
	int Func_ID;
	
	while (true)
	{
		printf("*****%d �ڽӱ�洢�ṹ��ͼ����*****\n", Call_ID++);
		//puts("*****�ڽӱ�洢�ṹ��ͼ����*****");
		puts("����Ҫ���Եĺ�����");

		puts("11���л�����ͼ�Ĵ洢�ṹ");
		puts("00���˳�����");
		scanf("%d", &Func_ID);
		getchar();
		printf("%d\n", Func_ID);

		switch (Func_ID)
		{
		case 11:
			puts("�л�����ͼ�Ĵ洢�ṹ��");
			return 1;
		case 00:
			puts("�˳����ԣ�");
			return 0;
		default:
			break;
		}
	}
}

int Test_GraphyMatrix()
{
	int Func_ID;

	while (true)
	{
		printf("*****%d �ڽӾ���洢�ṹ��ͼ����*****\n", Call_ID++);
		//puts("*****�ڽӾ���洢�ṹ��ͼ����*****");
		puts("����Ҫ���Եĺ�����");

		puts("11���л�����ͼ�Ĵ洢�ṹ");
		puts("00���˳�����");
		scanf("%d", &Func_ID);
		getchar();
		printf("%d\n", Func_ID);

		switch (Func_ID)
		{
		case 1:
			
			break;
		case 11:
			puts("�л�����ͼ�Ĵ洢�ṹ��");
			return 1;
		case 00:
			puts("�˳����ԣ�");
			return 0;
		default:
			break;
		}
	}
}