 ///
 /// @file    queue.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-15 22:38:59
 ///
 
#include <iostream>
using std::cout;
using std::endl;
class Queue
{
public:
	Queue(int size)
	:_size(size)
	 ,_front(0)
	 ,_rear(0)
	 ,_ptr(new int[_size]())
	{
		
	}
	~Queue()
	{
		delete []_ptr;
	}

	bool empty()const
	{
		return _front==_rear;
	}

	bool full()const
	{
		return (_rear+1)%_size==_front;
	}
		
	void push(int num)
	{
		if(!full())
		{
			_ptr[_rear++]=num;
		}
		else
			cout<<"队列已满"<<endl;
	}

	void pop()
	{
		if(!empty())
		{
			_front++;
			_front%=_size;
		}
		else
			cout<<"队列已空"<<endl;
	}
private:
	int _size;
	int _front;
	int _rear;
	int *_ptr;
};
int main(void)
{
	Queue queue(5);
	cout<<"此时队列是否为空:"<<queue.empty()<<endl;
	queue.push(7);
	cout<<"此时队列是否为空:"<<queue.empty()<<endl;
	
	return 0;
}
