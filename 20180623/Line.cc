 ///
 /// @file    Line.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-23 14:25:38
 ///
#include "Line.h"
#include <iostream>
using std::cout;
using std::endl;

class Line::LineImpl
{
	//嵌套类（内部类）
	class Point
	{
	public:
		Point(int ix,int iy)
		:_ix(ix)
		 ,_iy(iy)
		{
			cout<<"Point(int,int):"<<endl;
		}
		void print()const
		{
			cout<<"("<<_ix
				<<","<<_iy
				<<")";
		}
	private:
		int _ix;
		int _iy;
	};
public:
	LineImpl(int x1,int y1,int x2,int y2)
	:_p1(x1,y1)
	 ,_p2(x2,y2)
	{
		cout<<"LineImpl构造函数"<<endl;
	}
	void printLine()const
	{
		_p1.print();
		cout<<"--->";
		_p2.print();
		cout<<endl;
	}
	~LineImpl()
	{
		cout<<"~LineImpl"<<endl;
	}
private:
	Point _p1;
	Point _p2;
};
Line::Line(int x1,int y1,int x2,int y2)
:_pImpl(new LineImpl(x1,y1,x2,y2))
{
	cout<<"Linw(int,int,int,int)"<<endl;
}
void Line::printLine()const
{
	_pImpl->printLine();
}
Line::~Line()
{
	delete _pImpl;
}
int main(void)
{
	Line line(4,5,6,7);
	line.printLine();
	return 0;
}
