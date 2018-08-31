 ///
 /// @file    stack.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-15 20:39:25
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Stack
{
public:
	Stack(int size);
	~Stack();
	bool empty()const;
	bool full()const;
	void push(int num);
	void pop();
	int top();
private:
	int _top;
	int _size;
	int * _parr;
};


Stack::Stack(int size)
:_top(-1)
,_size(size)
,_parr(new int[size]())
{
	cout<<"我是构造函数"<<endl;
}

Stack::~Stack()
{
	cout<<"我是析构函数"<<endl;
	delete []_parr;
}

bool Stack::empty()const 
{
	return -1==_top;
}

bool Stack::full()const
{
	return _size-1==_top;
}

void Stack::push( int num)
{
	if(!full())
	{
		_parr[++_top]=num;
	}
	else
		cout<<"此时栈已经满了"<<endl;
}

//出栈函数
void Stack::pop()
{
	if(!empty())
	{
		--_top;
	}
	else
		cout<<"栈已空"<<endl;
}

int Stack::top()
{
	if(!empty())
	{
		cout<<"栈顶元素是："<<_parr[_top]<<endl;
	}
	else
		cout<<"此时栈为空"<<endl;
}


int main(void)
{
	Stack stack(10);//调用构造函数
	cout<<"此时站是否为空："<<stack.empty()<<endl;
	stack.push(8);
	cout<<"此时站是否为空："<<stack.empty()<<endl;
	for(int i=2;i<12;i++)
	{
		stack.push(i);
	}
	cout<<"有放入了10个数据后"<<endl;
	cout<<"此时栈是否为空："<<stack.empty()<<endl;
	//一次取出站定的数据
	while(!stack.empty())
	{
		stack.top();
		stack.pop();
	}

	cout<<"此时站是否为空："<<stack.empty()<<endl;
	return 0;
}
