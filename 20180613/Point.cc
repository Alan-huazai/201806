 ///
 /// @file    Point.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-13 02:41:03
 ///
 
#include <iostream>
using std::cout;
using std::endl;


class Point
{
public:
#if 0
	Point()//如果没有构造函数，系统会默认提供一个构造函数
	{
		
	}
#endif
	Point(int x,int y)
	{
		_ix=x;
		_iy=y;
	}
	
	void print()
	{
		cout<<"("<<_ix
			<<","<<_iy
			<<")"<<endl;
	}
private:
	int _ix;
	int _iy;
};

int main(void)
{
	Point p;
	p.print();
	return 0;
}
