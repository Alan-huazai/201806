 ///
 /// @file    new.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-15 17:02:13
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
	//为对象申请动态内存
	Point *p=new Point(1,2);//构造函数
	p->print();
	delete p;
	p=NULL;
	return 0;
}
