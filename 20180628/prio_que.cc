 ///
 /// @file    prio_que.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-28 10:11:36
 ///
 
#include <iostream>
#include <queue>
using std::priority_queue;
using std::cout;
using std::endl;
void test1()
{
	int arr[]={5,7,8,6,9,0,4,2,1,3};
	priority_queue<int> pque;
	for(int idx=0;idx!=10;++idx)
	{
		pque.push(arr[idx]);
		cout<<"此时队列中优先级最高的元素是:"<<pque.top()<<endl;
	}
	while(!pque.empty())
	{
		cout<<pque.top()<<endl;
		pque.pop();
	}
}
int main(void)
{
	test1();
	return 0;
}
