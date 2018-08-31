 ///
 /// @file    Point.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-23 13:31:50
 ///
 
#include <iostream>
using std::cout;
using std::endl;
class AnotherPoint
{
public:
	AnotherPoint(double dx,double dy)
	:_dx(dx)
	 ,_dy(dy)
	{
		cout<<"AnotherPoint()"<<endl;
	}
friend std::ostream &operator<<(std::ostream &os,const AnotherPoint &rhs);
private:
	double _dx;
	double _dy;
};
class Point
{
public:
	Point(int ix,int iy)
	:_ix(ix)
	 ,_iy(iy)
	{
		cout<<"Point(int,int)"<<endl;
	}
	operator int()
	{
		return _ix;
	}
	operator AnotherPoint()
	{
		return AnotherPoint(_ix,_iy);
	}
	friend std::ostream &operator<<(std::ostream &os,const Point &rhs);
private:
	double _ix;
	double _iy;
};

std::ostream &operator<<(std::ostream &os,const Point &rhs)
{
	os<<"("<<rhs._ix
		<<","<<rhs._iy
		<<")";
}
std::ostream &operator<<(std::ostream &os,const AnotherPoint &rhs)
{
	os<<"("<<rhs._dx
		<<","<<rhs._dy
		<<")";
}

int main(void)
{
	Point p1(1,2);
	int x=p1;
	cout<<"x="<<x<<endl;
	cout<<"--------------"<<endl;
	cout<<"p1="<<p1<<endl;
	AnotherPoint p2=p1;
	cout<<"p2="<<p2<<endl;
	return 0;
}

