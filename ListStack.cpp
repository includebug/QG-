#include "ListStack.h"
#include <iostream>

//��ջ(���������)


ListStack::ListStack()//��ʼ��
{
	top = nullptr;
	stackSize = 0;
}

bool ListStack::isEmptyStack()//�ж���ջ�Ƿ�Ϊ��
{
	return (top == NULL);
}
ElemType ListStack::getTopStack()//�õ�ջ��Ԫ��
{
	return top->data;
}

bool ListStack::clearStack()//���ջ
{
	node *ptr = NULL;

	while (top != NULL)     //ѭ���ͷ�ջ�ڵ�ռ�
	{
		ptr = top->next;
		delete top;
		top = ptr;
	}
	return false;
}

ListStack::~ListStack() //����ջ
{
	node *ptr = NULL;

	while (top != NULL)     //ѭ���ͷ�ջ�ڵ�ռ�
	{
		ptr = top->next;
		delete top;
		top = ptr;
	}

}

int * ListStack::stackLength(int * length)//���ջ����
{
	node* p = top;
	int i = 0;
	for ( ; p != nullptr; i++)
	{
		p = p->next;
	}
	*length =  i;
	return length;
}

bool ListStack::pushStack(ElemType data)//��ջ
{
	node *ptr = new node;
	ptr->data = data;        //��ջ����ֵ
	ptr->next = top;        //��ջ��ָ���ջ��
	top = ptr;              //topָ����ջ��
	stackSize++;
	return false;
}

ElemType * ListStack::popStack(ElemType * data) //��ջ
{
	node *ptr = top->next;  //Ԥ����һ�ڵ��ָ��
	*data = top->data;
	delete top;             //�ͷ�ջ���ռ�
	top = ptr;              //ջ���仯
	return data;
}