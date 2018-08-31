 ///
 /// @file    Point.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-14 21:52:34
 ///
 
#include <iostream>
using std::cout;
using std::endl;
class Point
{
public:
	Point(int ix,int iy)
	:_ix(ix)
	 ,_iy(iy)
	{
		cout<<"我是构造函数"<<endl;
	}
	//const成员函数i,不能修改数据成员，不能调用非const成员函数
	void print(/*Point * const this*/)const
	{
//		_ix=10;
		cout<<"我是const"<<endl;
		cout<<"("<<_ix
			<<","<<_iy
			<<")"<<endl;
	}
	
	//非const成员函数
	void print()
	{
		cout<<"我是非const"<<endl;
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
	const Point p1(1,2);//const对象只能调用const成员函数
	p1.print();	
	
	Point p2(3,4);//非const对象两种函数都可以调用，当两种都存在时，会调用非const的成员函数
	p2.print();
	return 0;
}
