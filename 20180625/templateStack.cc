 ///
 /// @file    templateStack.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-25 09:06:12
 ///
 
#include <iostream>
using std::cout;
using std::endl;
template <typename T,int kSize=10>
class Stack
{
public:
	Stack();
	~Stack();
	bool empty()const;
	bool full()const;

	void push(T const &data);
	T pop();
	T top();
private:
	char * _arr;
	int _top;
};

template <typename T,int kSize>
Stack<T,kSize>::Stack()
:_arr(new char[kSize]())
,_top(-1)
{
	cout<<"Stack()"<<endl;
}

template <typename T,int kSize>
Stack<T,kSize>::~Stack()
{
	delete []_arr;
	cout<<"~Stack()"<<endl;
}

template <typename T,int kSize>
bool Stack<T,kSize>::empty()const
{
	return _top==-1;
}

template <typename T,int kSize>
bool Stack<T,kSize>::full()const
{
	return _top==kSize-1;
}

template <typename T,int kSize>
void Stack<T,kSize>::push(T const &data)
{
	if(!full())
	{
		_arr[++_top]=data;
	}
	else
	{
		cout<<"栈已满"<<endl;
	}
}

template <typename T,int kSize>
T Stack<T,kSize>::pop()
{
	if(!empty())
	{
		return _arr[_top--];
	}
	else
	{
		cout<<"栈已空"<<endl;
	}
}

template <typename T,int kSize>
T Stack<T,kSize>::top()
{
	if(!empty())
	{
		return _arr[_top];
	}
	else
	{
		cout<<"栈已空"<<endl;
	}
}
int main(void)
{
	Stack <int,10> stack;
	cout<<"此时栈是否为空:"<<stack.empty()<<endl;
	for(int idx=0;idx<10;idx++)
	{
		stack.push(idx);
		cout<<"入栈元素："<<idx<<endl;
	}
	cout<<"此时栈是否为空:"<<stack.empty()<<endl;
	cout<<"此时栈是否为满："<<stack.full()<<endl;
	cout<<"获取栈顶元素："<<stack.top()<<endl;
	stack.pop();
	cout<<"出栈一个数后"<<endl;
	cout<<"获取栈顶元素："<<stack.top()<<endl;


	return 0;
}
