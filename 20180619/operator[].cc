
 ///
 /// @file    operator[].cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-06-19 09:45:30
 ///
 
#include <iostream>
using std::cout;
using std::endl;
class Demo
{
public:
	Demo()
		:_cnt(0)
	{
		
	}
	int operator()(int x,int y)
	{
		return x+y;
	}
private:
	int _cnt;
};
int main(void)
{
	Demo demo;
	cout<<"demo(3,4)="<<demo(3,4)<<endl;//函数对象
	return 0;
}
