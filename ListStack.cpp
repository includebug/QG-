#include "ListStack.h"
#include <iostream>

//链栈(基于链表的)


ListStack::ListStack()//初始化
{
	top = nullptr;
	stackSize = 0;
}

bool ListStack::isEmptyStack()//判断链栈是否为空
{
	return (top == NULL);
}
ElemType ListStack::getTopStack()//得到栈顶元素
{
	return top->data;
}

bool ListStack::clearStack()//清空栈
{
	node *ptr = NULL;

	while (top != NULL)     //循环释放栈节点空间
	{
		ptr = top->next;
		delete top;
		top = ptr;
	}
	return false;
}

ListStack::~ListStack() //销毁栈
{
	node *ptr = NULL;

	while (top != NULL)     //循环释放栈节点空间
	{
		ptr = top->next;
		delete top;
		top = ptr;
	}

}

int * ListStack::stackLength(int * length)//检测栈长度
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

bool ListStack::pushStack(ElemType data)//入栈
{
	node *ptr = new node;
	ptr->data = data;        //新栈顶存值
	ptr->next = top;        //新栈顶指向旧栈顶
	top = ptr;              //top指向新栈顶
	stackSize++;
	return false;
}

ElemType * ListStack::popStack(ElemType * data) //出栈
{
	node *ptr = top->next;  //预存下一节点的指针
	*data = top->data;
	delete top;             //释放栈顶空间
	top = ptr;              //栈顶变化
	return data;
}