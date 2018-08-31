 ///
 /// @file    prio_que2.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-28 14:57:31
 ///
 
#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using std::vector;
using std::cout;
using std::priority_queue;
using std::endl;
class Point
{
friend std::ostream & operator <<(std::ostream &os,const Point &rhs);
public:
	Point(int ix,int iy)
	:_ix(ix)
	 ,_iy(iy)
	{}
	int distance()const
	{
		return sqrt(_ix*_ix+_iy*_iy);
	}
private:
	int _ix;
	int _iy;
};
bool operator<(const Point &lhs,const Point &rhs)
{
	return lhs.distance()<rhs.distance();
}
struct Compare
{
	bool operator()(const Point & lhs,const Point & rhs) const 
	{
		return lhs.distance()>rhs.distance();
	}
};

std::ostream & operator <<(std::ostream &os,const Point &rhs)
{
	os<<"("<<rhs._ix
		<<","<<rhs._iy
		<<")";
	return os;
}
void test1(void)
{
	priority_queue<int,vector<int>,std::greater<int>> pque;
	int arr[]={1,2,3,4,5,6};
	for(int idx=0;idx<6;++idx)
	{
		pque.push(arr[idx]);
		cout<<"优先元素是:"<<pque.top()<<endl;
	}
	while(!pque.empty())
	{
		cout<<pque.top()<<" ";
		pque.pop();
	}
	cout<<endl;
}
void test2(void)
{
	 priority_queue<Point,vector<Point>,Compare> pque;
	 Point arr[]={Point(1,1),Point(3,3),Point(5,5),Point(2,2),Point(6,6)};
	for(int idx=0;idx!=5;++idx)
	{
		pque.push(arr[idx]);
		cout<<"最优先的点是:"<<pque.top()<<endl;
	}
	while(!pque.empty())
	{
		cout<<pque.top()<<endl;
		pque.pop();
	}
}

int main(void)
{
	//test1();
	test2();
	return 0;
}
