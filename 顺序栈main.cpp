#include <iostream>
#include <stdlib.h> 
#include "ListStack.h"
using namespace std;

int main(void)
{
	int choice, j, k = 0;
	int *i = &k;
	ListStack qg;
	cout << " ˳��ջ�Ļ�������\n" << endl;
	cout << "1:�ж��Ƿ�Ϊ��ջ 2:��ջ 3:�õ�ջ��Ԫ�� 4:���ջ�ĳ��� 5:��ջ 6:���ջ 7:�˳�" << endl;
	cout << "\t\t----*****����choice:" << "  " << endl;
	do
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			if (qg.isEmptyStack())
			{
				cout << "ջΪ�յ�" << endl;
			}
		}continue;
		case 2:
		{
			cout << "������Ҫ���������" << endl;
			cin >> j;
			qg.pushStack(j);
		}continue;
		case 3:
		{
			cout << qg.getTopStack() << endl;
		}continue;
		case 4:
		{
			cout << "����ĳ���Ϊ";
			cout << *qg.stackLength(i) << endl;
		}continue;
		case 5:
		{
			if (qg.isEmptyStack())
			{
				cout << "��ջ!�޷�����" << endl;
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