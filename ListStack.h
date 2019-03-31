#include <iostream>
#ifndef LISTSTACK_H_INCLUDED
#define LISTSTACK_H_INCLUDED
typedef int ElemType;
struct node                   //��ջ�ڵ�
{
	ElemType data;            //������
	node *next;               //ָ����
};

class ListStack
{
public:
	//��ջ
	ListStack();//��ʼ��ջ
	bool isEmptyStack();//�ж�ջ�Ƿ�Ϊ��
	ElemType getTopStack(); //�õ�ջ��Ԫ��
	bool clearStack();//���ջ
	~ListStack();//����ջ
	int* stackLength(int *length);//���ջ����
	bool pushStack(ElemType data);//��ջ
	ElemType* popStack(ElemType *data);//��ջ

private:
	node *top;
	int stackSize;
};



#endif // LISTSTACK_H_INCLUDED

