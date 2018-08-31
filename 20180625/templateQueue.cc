 ///
 /// @file    templateQueue.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-25 09:52:11
 ///
 
#include <iostream>
using std::cout;
using std::endl;

template <typename T,int kSize=10>
class Queue
{
public:
	Queue();
	~Queue();
	bool empty()const;
	bool full()const;
	void push(T const &data);
	T pop();
	T front()const;
	T rear()const;
private:
	int _front;
	int _rear;
	T * _arr;
};
template <typename T,int kSize>
Queue<T,kSize>::Queue()
:_front(0)
,_rear(0)
,_arr(new T[kSize]())
{
	cout<<"Queue()"<<endl;
}
template <typename T,int kSize>
Queue<T,kSize>::~Queue()
{
	delete []_arr;
	cout<<"~Queue()"<<endl;
}
template <typename T,int kSize>
bool Queue<T,kSize>::empty()const
{
	return _front==_rear;
}
template <typename T,int kSize>
bool Queue<T,kSize>::full()const
{
	return _front==(_rear+1)%kSize;
}
template <typename T,int kSize>
void Queue<T,kSize>::push(T const &data)
{
	if(!full())
	{
		_arr[_rear++]=data;
		_rear%=kSize;
	}
	else
	{
		cout<<"队列已满"<<endl;
	}
}
template <typename T,int kSize>
T Queue<T,kSize>::pop()
{
	if(!empty())
	{
		return _arr[_front++];
		_front%=kSize;
	}
	else
	{
		cout<<"队列已空"<<endl;
	}
}
template <typename T,int kSize>
T Queue<T,kSize>::front()const
{
	if(!empty())
	{
		return _arr[_front];
	}
	else
		cout<<"队列为空"<<endl;
}
template <typename T,int kSize>
T Queue<T,kSize>::rear()const
{
	if(!empty())
	{

		return _arr[(_rear-1+kSize)%kSize];
	}	
	else
		cout<<"队列为空"<<endl;
}
int main(void)
{
	Queue<int,10> queue;
	cout<<"队列是否为空:"<<queue.empty()<<endl;
	for(int idx=0;idx<9;++idx)
	{
		queue.push(idx);
		cout<<"入队元素为:"<<idx<<endl;
	}
	cout<<"队列是否为空:"<<queue.empty()<<endl;
	cout<<"队列是否为满:"<<queue.full()<<endl;
	
	cout<<"出队一个元素："<<queue.pop()<<endl;
	cout<<"队列是否为空:"<<queue.empty()<<endl;
	cout<<"队列是否为满:"<<queue.full()<<endl;
	cout<<"队头元素："<<queue.front()<<endl;
	cout<<"队尾元素："<<queue.rear()<<endl;

	return 0;
}
