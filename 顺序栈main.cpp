#include <iostream>
#include <stdlib.h> 
#include "ListStack.h"
using namespace std;

int main(void)
{
	int choice, j, k = 0;
	int *i = &k;
	ListStack qg;
	cout << " 顺序栈的基本操作\n" << endl;
	cout << "1:判断是否为空栈 2:入栈 3:得到栈顶元素 4:检测栈的长度 5:出栈 6:清空栈 7:退出" << endl;
	cout << "\t\t----*****输入choice:" << "  " << endl;
	do
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			if (qg.isEmptyStack())
			{
				cout << "栈为空的" << endl;
			}
		}continue;
		case 2:
		{
			cout << "请输入要插入的数字" << endl;
			cin >> j;
			qg.pushStack(j);
		}continue;
		case 3:
		{
			cout << qg.getTopStack() << endl;
		}continue;
		case 4:
		{
			cout << "链表的长度为";
			cout << *qg.stackLength(i) << endl;
		}continue;
		case 5:
		{
			if (qg.isEmptyStack())
			{
				cout << "空栈!无法弹出" << endl;
			}
			else
			{
				cout << *qg.popStack(i) << endl;
			}
		}continue;
		case 6:
		{
			qg.clearStack();
		}continue;
		default:
		{
			break;
		}
		}
	} while (choice != 7);
	system("pause");
	return 0;
}