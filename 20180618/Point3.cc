 ///
 /// @file    Point1.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-18 08:19:15
 ///
//友元函数之成员函数
#include <math.h>
#include <iostream>
using std::cout;
using std::endl;
class Point; //前向声明


class Line
{
public:
	float distance(const Point &lef,const Point &ref);
	void setPoint(Point &ref,int ix,int iy);
};
class Point
{
	friend Line;//友元类
public:
	Point(int ix=0,int iy=0)
	:_ix(ix)
	 ,_iy(iy)
	{
		cout<<"我是构造函数"<<endl;
	}
	void print()
	{
		cout<<"("<<_ix
			<<","<<_iy
			<<")";
	}
private:
	int _ix;
	int _iy;
};

float Line::distance(const Point &lef,const Point &ref)
{
	return sqrt((lef._ix-ref._ix)*(lef._ix-ref._ix)+(lef._iy-ref._iy)*(lef._iy-ref._iy));
}

void Line::setPoint(Point &ref,int ix,int iy)
{
	ref._ix=ix;
	ref._iy=iy;
}

int main(void)
{
	Point p1(1,2);
	Point p2(3,4);
	p1.print();
	cout<<"----->";
	p2.print();
	Line line;
	cout<<"的距离："<<line.distance(p1,p2)<<endl;

	cout<<"---------------------------"<<endl;
	line.setPoint(p1,3,5);
	p1.print();
	cout<<endl;
	return 0;
}
