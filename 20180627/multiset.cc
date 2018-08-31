 ///
 /// @file    multiset.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-27 15:11:19
 ///
#include <cmath>
#include <iostream>
#include <set>
using std::multiset;
using std::cout;
using std::endl;
class Point
{
friend std::ostream & operator<<(std::ostream &os ,const Point & rhs);
public:
	Point(int ix,int iy)
	:_ix(ix)
	 ,_iy(iy)
	{}
	
	int length()const 
	{
		return sqrt(_ix*_ix+_iy*_iy);
	}

private:
	int _ix;
	int _iy;
};
std::ostream & operator<<(std::ostream & os,const Point & rhs)
{
	os<<"("<<rhs._ix
		<<","<<rhs._iy
		<<")";
	return os;
}

bool operator<(const Point &lhs,const Point &rhs)
{
	return lhs.length()<rhs.length();
}

int test1()
{
	multiset<int,std::greater<int>> multisetInt{1,2,4,8,5,7,3,9};
	multiset<int>::const_iterator  cit=multisetInt.begin();
	for(;cit!=multisetInt.end();++cit)
	{
		cout<<*cit<<" ";
	}
	cout<<endl;
	return 0;
}
void test2(void)
{
	multiset<Point> points{Point(1,2),Point(2,3),Point(1,2),Point(7,8),Point(7,8),Point(5,6)};
	multiset<Point>::const_iterator cit;
	for(cit=points.begin();cit!=points.end();++cit)
	{
		cout<<*cit<<" ";
	}
	cout<<endl;
}
int main(void)
{
	test2();
	return 0;
}
