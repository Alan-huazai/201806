 ///
 /// @file    Line.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-14 17:35:22
 ///
 
#include <iostream>
using std::cout;
using std::endl;
class Point
{
public:
	Point()
	{
		cout<<"我是Point无参构造函数"<<endl;
	}
	Point(int ix,int iy)
	:_ix(ix)
	 ,_iy(iy)
	{
		cout<<"我是Point构造函数"<<endl;
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

class Line
{
public:
	Line(int x1,int y1,int x2,int y2)
	: _p1(x1,y1) //默认情况下会调用无参构造函数,对象成员也要放在初始化列表中进行初始化
	  ,_p2(x2,y2)
	{
		cout<<"我是Line的构造函数"<<endl;
	}
	void printLine()
	{
		_p1.print();
		cout<<"---->";
		_p2.print();
		cout<<endl;
	}

private:
	//对象成员的初始化必须在初始化列表中进行
	Point _p1;  //调用的是无参构造函数
	Point _p2;
};
int main(void)
{
	Line line(1,2,3,4);
	line.printLine();
	return 0;
}
