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
		puts("输入测试的图的存储结构：");
		puts("M:邻接矩阵存储结构的图");
		puts("L:邻接表存储结构的图");
		puts("q:退出程序");

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
			puts("输入参数有误！");
	}
	
	return 0;
}

int Test_GraphyList()
{
	int Func_ID;
	
	while (true)
	{
		printf("*****%d 邻接表存储结构的图测试*****\n", Call_ID++);
		//puts("*****邻接表存储结构的图测试*****");
		puts("输入要测试的函数：");

		puts("11：切换测试图的存储结构");
		puts("00：退出测试");
		scanf("%d", &Func_ID);
		getchar();
		printf("%d\n", Func_ID);

		switch (Func_ID)
		{
		case 11:
			puts("切换测试图的存储结构！");
			return 1;
		case 00:
			puts("退出测试！");
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
		printf("*****%d 邻接矩阵存储结构的图测试*****\n", Call_ID++);
		//puts("*****邻接矩阵存储结构的图测试*****");
		puts("输入要测试的函数：");

		puts("11：切换测试图的存储结构");
		puts("00：退出测试");
		scanf("%d", &Func_ID);
		getchar();
		printf("%d\n", Func_ID);

		switch (Func_ID)
		{
		case 1:
			
			break;
		case 11:
			puts("切换测试图的存储结构！");
			return 1;
		case 00:
			puts("退出测试！");
			return 0;
		default:
			break;
		}
	}
}