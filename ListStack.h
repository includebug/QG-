#include <iostream>
#ifndef LISTSTACK_H_INCLUDED
#define LISTSTACK_H_INCLUDED
typedef int ElemType;
struct node                   //链栈节点
{
	ElemType data;            //数据域
	node *next;               //指针域
};

class ListStack
{
public:
	//链栈
	ListStack();//初始化栈
	bool isEmptyStack();//判断栈是否为空
	ElemType getTopStack(); //得到栈顶元素
	bool clearStack();//清空栈
	~ListStack();//销毁栈
	int* stackLength(int *length);//检测栈长度
	bool pushStack(ElemType data);//入栈
	ElemType* popStack(ElemType *data);//出栈

private:
	node *top;
	int stackSize;
};



#endif // LISTSTACK_H_INCLUDED

